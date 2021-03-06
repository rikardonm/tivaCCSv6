/*
 * \file
 *
 * \date 04/03/2015
 *
 * \version v1.0
 *
 * \brief main
 *
 * \details
 *
 * PC Serial	-> PA0/PA1	-> comunicação com PC		-> UART0
 * BT 			-> PA5		-> mode sel					-> GPIO
 *todo: change BT to pb5
 * ColorClick	-> PA6/PA7	-> linhas I2C				-> I2C1
 * BT			-> PB0/PB1	-> linhas uart(rx/tx)		-> UART1
 * Colorclick	-> PB3		-> led azul					-> T3CCP1
 * LCD			-> PC7		-> linha RS					-> GPIO
 * LCD			-> PD6		-> linha EN					-> GPIO
 * LCD			-> PD7		-> linha CLK				-> GPIO
 * LCD			-> PF4		-> linha DTA				-> GPIO
 * LightClick	-> PE5		-> valor analog do sensor	-> AIN8		-> ADC0
 * ColorClick	-> PF2		-> led vermelho				-> T1CCP0
 * ColocClick	-> PF3		-> led verde				-> T1CCP1
 *
 *
 *
 */

#include "main.h"
#include "includeAll.h"






#define PcSendChar(character)		UARTCharPut(UART0_BASE, (uint8_t) character)

#define BTSendChar(character)		UARTCharPut(UART1_BASE, (uint8_t) character)


//global vars
uint32_t u32DelayTime=0;


#define COLORADDR						0x29
#define ColorRegisterEnable				0x00

#define ColorRegisterGain				0x0F
#define ColorRegisterGainx60			0x03
#define ColorRegisterGainx16			0x02
#define ColorRegisterGainx4				0x01
#define ColorRegisterGainx1				0x00

#define ColorRegisterTime				0x01

#define ColorGetClear					0x14
#define ColorGetRed						0x16
#define ColorGetGreen					0x18
#define ColorGetBlue					0x1A
#define ColorGetID						0x12
#define ColorGetStatus					0x13



void ColorSend(uint8_t addr, uint8_t data)
{
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, false);
	I2CMasterDataPut(I2C1_BASE, addr + 0x80);
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_SEND_START);
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterDataPut(I2C1_BASE, data);
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_SEND_FINISH);
}


uint8_t ColorReadSingleMemory(uint8_t u8ColorAddr)
{
	uint32_t temp;
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, false);
	I2CMasterDataPut(I2C1_BASE, u8ColorAddr + 0x80);
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_SEND_START);
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, true);
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_SINGLE_RECEIVE);
	temp = I2CMasterDataGet(I2C1_BASE);
	return((uint8_t) temp);
}


uint16_t ColorRead(uint8_t u8Color)
{
	uint32_t temp, temp2;
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, false);
	I2CMasterDataPut(I2C1_BASE, u8Color + 0xA0);		//A0 -> multiple auto-increment transactions
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_SEND_START);
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, true);
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_RECEIVE_START);
	temp = I2CMasterDataGet(I2C1_BASE);
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, true);
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_RECEIVE_FINISH);
	temp2 = I2CMasterDataGet(I2C1_BASE);
	temp = temp+(temp2<<8);
	return((uint16_t) temp);
}

void ColorReadAll(uint16_t* ColorArray)
{	//send read command to sensor
	uint32_t temp, temp2;
	while(I2CMasterBusy(I2C1_BASE));							//test busy
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, false);			//write slave addres/target
	I2CMasterDataPut(I2C1_BASE, 0x14 + 0xA0);					//A0 -> multiple auto-increment transactions (slave memory location)
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_SEND_START);	//start
	//start reading clear
	while(I2CMasterBusy(I2C1_BASE));							//busy check
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, true);			//target addr
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_RECEIVE_START);	//start
	temp = I2CMasterDataGet(I2C1_BASE);							//get data
	while(I2CMasterBusy(I2C1_BASE));							//busy
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, true);			//set slave
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_RECEIVE_CONT);		//start
	temp2 = I2CMasterDataGet(I2C1_BASE);
	temp = temp+(temp2<<8);
	*ColorArray = temp;
	ColorArray++;
	//start reading red
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, true);
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_RECEIVE_CONT);
	temp = I2CMasterDataGet(I2C1_BASE);
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, true);
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_RECEIVE_CONT);
	temp2 = I2CMasterDataGet(I2C1_BASE);
	temp = temp+(temp2<<8);
	*ColorArray = temp;
	ColorArray++;
	//start reading green
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, true);
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_RECEIVE_CONT);
	temp = I2CMasterDataGet(I2C1_BASE);
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, true);
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_RECEIVE_CONT);
	temp2 = I2CMasterDataGet(I2C1_BASE);
	temp = temp+(temp2<<8);
	*ColorArray = temp;
	ColorArray++;
	//start reading blue
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, true);
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_RECEIVE_CONT);
	temp = I2CMasterDataGet(I2C1_BASE);
	while(I2CMasterBusy(I2C1_BASE));
	I2CMasterSlaveAddrSet(I2C1_BASE, COLORADDR, true);
	I2CMasterControl(I2C1_BASE, I2C_MASTER_CMD_BURST_RECEIVE_FINISH);
	temp2 = I2CMasterDataGet(I2C1_BASE);
	temp = temp+(temp2<<8);
	*ColorArray = temp;
}


void ColorInit(void)
{
	ColorSend(ColorRegisterEnable , 0x1B);
	//Todo: colocar delay
	u32DelayTime = 5000;
	while(u32DelayTime!=0)
		u32DelayTime--;
	ColorSend(ColorRegisterGain, ColorRegisterGainx1);
	ColorSend(ColorRegisterTime, 128);					//any value from 0 to 256 (0xFF), inverse proportion
}



void PCuart(void)
{
	uint32_t intStatus = UARTIntStatus(UART0_BASE, true);
	int32_t tempChar = 0;
PCUart:
	tempChar = UARTCharGetNonBlocking(UART0_BASE);
	BTSendChar(tempChar);
	while(tempChar != -1)
		goto PCUart;
	UARTIntClear(UART0_BASE, intStatus);
}

void BTuart(void)
{
	uint32_t intStatus = UARTIntStatus(UART1_BASE, true);
	int32_t tempChar = 0;
BTUart:
	tempChar = UARTCharGetNonBlocking(UART1_BASE);
	PcSendChar(tempChar);
	while(tempChar != -1)
		goto BTUart;
	UARTIntClear(UART1_BASE, intStatus);
}






/*
 * \brief UART module startup routine
 */
void UARTInit(void)
{
	UARTClockSourceSet(UART0_BASE, UART_CLOCK_SYSTEM);
	UARTConfigSetExpClk(UART0_BASE, CPU_REAL_CLOCK, 115200, UART_CONFIG_WLEN_8 \
			| UART_CONFIG_STOP_ONE | UART_CONFIG_PAR_NONE);
	UARTFIFOLevelSet(UART0_BASE, UART_FIFO_TX2_8, UART_FIFO_RX2_8);
	IntEnable(INT_UART0);
	UARTIntEnable(UART0_BASE, UART_INT_RX|UART_INT_RT);
	UARTIntRegister(UART0_BASE, PCuart);
	PcSendChar(12);															//clear terminal window

	UARTClockSourceSet(UART1_BASE, UART_CLOCK_SYSTEM);
	UARTConfigSetExpClk(UART1_BASE, CPU_REAL_CLOCK, 9600, UART_CONFIG_WLEN_8 \
			| UART_CONFIG_STOP_ONE | UART_CONFIG_PAR_NONE);
	UARTFIFOLevelSet(UART1_BASE, UART_FIFO_TX2_8, UART_FIFO_RX2_8);
	IntEnable(INT_UART1);
	UARTIntEnable(UART1_BASE, UART_INT_RX|UART_INT_RT);
	UARTIntRegister(UART1_BASE, BTuart);


//	UARTClockSourceSet(UART1_BASE, UART_CLOCK_SYSTEM);
//	UARTConfigSetExpClk(UART1_BASE, SysCtlClockGet(), 115200, UART_CONFIG_WLEN_8 \
//			| UART_CONFIG_STOP_ONE | UART_CONFIG_PAR_NONE);
//	UARTFIFOLevelSet(UART1_BASE, UART_FIFO_TX2_8, UART_FIFO_RX2_8);
//	IntEnable(INT_UART1);
//	UARTIntEnable(UART1_BASE, UART_INT_RX|UART_INT_RT);
//	UARTIntRegister(UART1_BASE, BTuart);
}



void ADCInit(void)
{
	ADCSequenceConfigure(ADC0_BASE, 0, ADC_TRIGGER_PROCESSOR, 0);
	ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH8|ADC_CTL_END);
	//ADCHardwareOversampleConfigure(ADC0_BASE, 1);
	ADCSequenceEnable(ADC0_BASE, 0);
}



void I2CInit(void)
{
	I2CMasterInitExpClk(I2C1_BASE, CPU_REAL_CLOCK , true);
	I2CMasterEnable(I2C1_BASE);
}

void UInt2String(uint32_t src, char* dest, uint8_t length)
{
	uint8_t index = 0;
	uint8_t out = ' ';
	uint64_t multiple = 1;
	uint32_t source = src;
	index = length-1;
	while(length>1)
	{
		multiple *= 10;
		length--;
	}
	while(index >= 1)
	{
		out = (uint32_t) (source/multiple);
		source -= out*(multiple);
		*dest = out+48;
		dest++;
		multiple /= 10;
		index--;
	}
	*dest = 0;
}


void PCSendColor(uint16_t colorValue)
{
	uint32_t delay;
	uint32_t temp;
	char PCSendString[16];
	char* PCStringPointer;
	ltoa(colorValue, &PCSendString);
	PCStringPointer = &PCSendString;
	while(*PCStringPointer)
	{
		temp = *PCStringPointer;
		PcSendChar(temp);
		PCStringPointer++;
		delay=1000;
		while(delay>0)
			delay--;
	}
}

void PCSendString(char* string)
{
	uint32_t delay;
	while(*string)
	{
		PcSendChar(*string);
		string++;
		delay=1000;
		while(delay>0)
			delay--;
	}
}


void BTInit(void)
{

}

/*
 * main.c
 */
int main(void) {
	
	uint8_t counter=0;
	unsigned long delay=0;
	uint16_t u16RedValue, u16GreenValue, u16BlueValue, u16ClearValue;
	uint16_t u16ColorArray[4];		//clear, red, green, blue
	uint32_t u32LightClick[2];		//lightClick analog read
	char rgb [10]  = {"RGB = ["};
	char clear [13]  = {";]; CLEAR = "};
	char end [10]  = {";"};

	SysCtlClockSet(SYSCTL_SYSDIV_2_5| SYSCTL_USE_PLL| \
		 			SYSCTL_XTAL_16MHZ| \
		 			SYSCTL_OSC_MAIN);

	PortFunctionInit();
	UARTInit();
	//I2CInit();
	//ColorInit();
	//ADCInit();
	BTInit();
	while(1)
	{
//		BTSendChar(counter);
//		counter ++;
//		for (delay = 5000000; delay > 0; delay--)
//		{
//		}
	}
	return 0;
}












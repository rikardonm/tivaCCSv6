/*
 * include_all.h
 *
 *  Created on: Oct 29, 2013
 *      Author: rikardo
 */


////hw_lib
//#include "my_lib/external_cons.h"
//#include "my_lib/mbb_hw_defs.h"
//#include "my_lib/stellaris_hw_defs.h"

//std libs?
#include <stdint.h>
#include <stdbool.h>
#include "stdio.h"
#include "math.h"
#include <stdlib.h>


/*
 * INCLUDE ALL
 */
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
//inc/ 	lm4f	120 h5	qr .h
//bibliotecas de mapeamento de memória
#include "inc/tm4c123gh6pm.h"
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"

//interrupt stuff
#include "driverlib/interrupt.h"
#include "inc/hw_nvic.h"
#include "inc/hw_ints.h"

//bibliotecas de mapeamento de funções e pinos
#include "driverlib/rom_map.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom.h"

//configuração dos pinos
#include "pin_config.h"


//bibliotecas de funções, software
#ifdef compile_to_debug
#include "driverlib/debug.h"
#endif
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/timer.h"
#include "driverlib/i2c.h"
#include "driverlib/adc.h"
#include "inc/hw_adc.h"
#include "driverlib/fpu.h"
#include "driverlib/systick.h"
#include "driverlib/uart.h"
#include "driverlib/comp.h"
#include "driverlib/udma.h"


//my libs
//#include "my_lib/lcd.h"
//#include "my_lib/myUse.h"
//#include "my_lib/ir.h"
//#include "my_lib/myUart.h"
//#include "my_lib/uk_mapping.h"
//#include "my_lib/cmd_sort.h"
//#include "my_lib/standAlone.h"








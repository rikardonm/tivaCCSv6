/*
 * main.h
 *
 *  Created on: Mar 4, 2015
 *      Author: ricardo
 */

#ifndef MAIN_H_
#define MAIN_H_

//definition for ROM API use
#ifndef TARGET_IS_BLIZZARD_RA2
#define TARGET_IS_BLIZZARD_RA2
#endif
//definition for device specific definitions
#ifndef PART_TM4C123GH6PM
#define PART_TM4C123GH6PM
#endif

#define CPU_CLOCK			80
#define CPU_REAL_CLOCK		80000000


#define PROJECT_NAME		("SensoresSaul")
#define LCD_SPLASHSCREEN1	1
#define LCD_SPLASHSCREEN2	1
#define LCD_CLEAR_SPLASH	0






#include "includeAll.h"

#endif /* MAIN_H_ */

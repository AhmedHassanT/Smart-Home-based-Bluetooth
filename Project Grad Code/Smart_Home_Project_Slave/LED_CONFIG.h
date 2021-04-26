/*
 * LED_CONFIG.h
 *
 *  Created on: Apr 25, 2021
 *      Author: Ahmed
 */

#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_
/*
What should i write in the configuration file ?
1- Macros
2- Address of registers
3- Renaming Ports
4- Renaming Pins
5- Renaming status
*/
#include "CPU_CONFIGURATION.h"

#define LED0_PORT		DIO_PORTC

#define LED0_PIN		DIO_PIN2
#define LED1_PIN		DIO_PIN7
#define LED2_PIN		DIO_PIN3

#define LED_INPUT		DIO_PORT_INPUT
#define LED_OUTPUT		DIO_PORT_OUTPUT

#define LED_HIGH		DIO_PIN_HIGH
#define LED_LOW			DIO_PIN_LOW


#endif /* LED_CONFIG_H_ */

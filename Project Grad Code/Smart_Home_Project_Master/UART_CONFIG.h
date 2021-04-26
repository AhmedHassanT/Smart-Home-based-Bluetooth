/*
 * UART_CONFIG.h
 *
 *  Created on: Apr 25, 2021
 *      Author: Ahmed
 */

#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_

#include "CPU_CONFIGURATION.h"
/*
#define UBRRL (*(volatile Uint8t*)(0x29))
#define UBRRH (*(volatile Uint8t*)(0x40))
#define UCSRA (*(volatile Uint8t*)(0x2B))
#define UCSRB (*(volatile Uint8t*)(0x29A)
#define UCSRC (*(volatile Uint8t*)(0x40))
#define UDR   (*(volatile Uint8t*)(0x2C))
*/
#define FRQ      16000000UL
#define BAUDRATE 9600UL

typedef enum
{
	UART_NOK = 0,
	UART_OK = 1
}UART_Status;



#endif /* UART_CONFIG_H_ */

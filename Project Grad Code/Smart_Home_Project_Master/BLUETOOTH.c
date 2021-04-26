/*
 * BLUETOOTH.c
 *
 *  Created on: Apr 25, 2021
 *      Author: Ahmed
 */


#include "BLUETOOTH.h"
#include "UART.h"

void BLUETOOTH_Init(){

	UART_Init();				/* Initialize UART Communication Protocol */

}

void BLUETOOTH_Transmit(Uint8t data){

	UART_Transmit(data);		/* Transmit Data Using UART Protocol */
}

Uint8t BLUETOOTH_Recieved(void){

	Uint8t data = 0 ;			/* Initialize a variable to Save the Data Coming From Bluetooth */
	data = UART_Receive();		/* Receive the Data Using UART Protocol */

	return data;
}

/*
 * App.c
 *
 *  Created on: Apr 25, 2021
 *      Author: Ahmed
 */


#include "SPI.h"
#include "BLUETOOTH.h"


volatile Uint8t data ;
int main(void)
{
	BLUETOOTH_Init();
	SPI_Init();

	while (1)
	{

	}


}

ISR(USART_RXC_vect){

	data = BLUETOOTH_Recieved();
	SPI_Transmit(data);



}

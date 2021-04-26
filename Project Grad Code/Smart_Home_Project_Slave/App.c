/*
 * App.c
 *
 *  Created on: Apr 25, 2021
 *      Author: Ahmed
 */


#include "LED.h"
#include "SPI.h"


volatile Uint8t data ;

int main(void)
{
	SPI_Init();
	LED0_Initialize();
	LED1_Initialize();
	LED2_Initialize();

	while (1)
	{

	}
}


ISR(SPI_STC_vect){

	data = SPI_Receive();

// Capital Letters Turns On and Small Letters Turns Off the LED

	switch(data){
		case 'R':
		LED0_ON();
		break;
		case 'r':
		LED0_OFF();
		break;
		case 'Y':
		LED1_ON();
		break;
		case 'y':
		LED1_OFF();
		break;
		case 'G':
		LED2_ON();
		break;
		case 'g':
		LED2_OFF();
		break;
	}



}

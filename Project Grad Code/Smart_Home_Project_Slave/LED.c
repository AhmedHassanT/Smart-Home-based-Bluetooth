/*
 * LED.c
 *
 *  Created on: Apr 25, 2021
 *      Author: Ahmed
 */


#include "LED.h"

void LED0_Initialize(void)
{
	//SET_BIT(DDRC, PC2);//Define direction
	//DIO_SetDirection(18, DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(LED0_PORT, LED0_PIN, LED_OUTPUT);//Define direction
}
void LED0_ON(void)
{
	//SET_BIT(LED0_PORT, LED0_PIN);
	//DIO_SetValue(18, LED_HIGH);
	DIO_SetPin_Value(LED0_PORT, LED0_PIN,LED_HIGH);
}
void LED0_OFF(void)
{
	//CLR_BIT(LED0_PORT, LED0_PIN);
	//DIO_SetValue(18, LED_LOW);
	DIO_SetPin_Value(LED0_PORT, LED0_PIN, LED_LOW);
}
void LED0_TGL(void)
{
	//TGL_BIT(LED0_PORT, LED0_PIN);
	DIO_TglPin_Vlaue(LED0_PORT, LED0_PIN);
}


void LED1_Initialize(void)
{
	//SET_BIT(DDRC, PC2);//Define direction
	//DIO_SetDirection(18, DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTC, LED1_PIN, LED_OUTPUT);//Define direction
}
void LED1_ON(void)
{
	//SET_BIT(LED0_PORT, LED0_PIN);
	//DIO_SetValue(18, LED_HIGH);
	DIO_SetPin_Value(DIO_PORTC, LED1_PIN, LED_HIGH);
}
void LED1_OFF(void)
{
	//CLR_BIT(LED0_PORT, LED0_PIN);
	//DIO_SetValue(18, LED_LOW);
	DIO_SetPin_Value(DIO_PORTC, LED1_PIN, LED_LOW);
}
void LED1_TGL(void)
{
	//TGL_BIT(LED0_PORT, LED0_PIN);
	DIO_TglPin_Vlaue(DIO_PORTC, DIO_PIN7);
}


void LED2_Initialize(void)
{
	//SET_BIT(DDRC, PC2);//Define direction
	//DIO_SetDirection(18, DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTD, LED2_PIN, LED_OUTPUT);//Define direction
}
void LED2_ON(void)
{
	//SET_BIT(LED0_PORT, LED0_PIN);
	//DIO_SetValue(18, LED_HIGH);
	DIO_SetPin_Value(DIO_PORTD, LED2_PIN, LED_HIGH);
}
void LED2_OFF(void)
{
	//CLR_BIT(LED0_PORT, LED0_PIN);
	//DIO_SetValue(18, LED_LOW);
	DIO_SetPin_Value(DIO_PORTD, LED2_PIN, LED_LOW);
}
void LED2_TGL(void)
{
	//TGL_BIT(LED0_PORT, LED0_PIN);
	DIO_TglPin_Vlaue(DIO_PORTD, DIO_PIN3);
}

/*
 * SPI.c
 *
 *  Created on: Apr 25, 2021
 *      Author: Ahmed
 */


#include "SPI.h"

void SPI_Init(void)
{
	#if SPI_MODE == MASTER
	SET_BIT(SPI_PORT, MOSI);/*Define direction as output*/
	CLR_BIT(SPI_PORT, MISO);/*Define direction as input*/
	SET_BIT(SPI_PORT, CLK);/*Define direction as output*/
	SET_BIT(SPI_PORT, SS); /*Define direction as output*/
	sei();							/* Enable Global Interrupt		 */
	SPCR = 0xD3 ;					/* 0b 1101 0011					 */
	SET_BIT(SPCR,SPIE);				/* Enable SPI Interrupt	Enable   */
	SET_BIT(SPCR,SPE);				/* Enable SPI Interrupt			 */
	//SPCR = 0x53;//0b 0101 0011
	#elif SPI_MODE == SLAVE
	CLR_BIT(SPI_PORT, MOSI);/*Define direction as input*/
	SET_BIT(SPI_PORT, MISO);/*Define direction as output*/
	CLR_BIT(SPI_PORT, CLK);/*Define direction as input*/
	CLR_BIT(SPI_PORT, SS); /*Define direction as input*/
	sei();
	SET_BIT(SPCR,SPIE);
	SET_BIT(SPCR,SPE);
	SPCR = 0xC3;
	//SPCR = 0x43;//0b 0100 0011
	#endif
}
void SPI_Transmit(Uint8t data)
{
	SPDR = data;

}
Uint8t SPI_Receive(void)
{
	return SPDR;
}

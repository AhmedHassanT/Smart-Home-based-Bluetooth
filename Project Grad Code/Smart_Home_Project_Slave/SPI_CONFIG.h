/*
 * SPI_CONFIG.h
 *
 *  Created on: Apr 25, 2021
 *      Author: Ahmed
 */

#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "CPU_CONFIGURATION.h"
/*
#define SPCR (*(volatile Uint8t*)(0x2D))
#define SPSR (*(volatile Uint8t*)(0x2E))
#define SPDR (*(volatile Uint8t*)(0x2F))
*/

#define MASTER 0
#define SLAVE  1

#define MOSI 5
#define MISO 6
#define CLK  7
#define SS   4

#define SPI_PORT DDRB

#define SPI_MODE SLAVE

#endif /* SPI_CONFIG_H_ */

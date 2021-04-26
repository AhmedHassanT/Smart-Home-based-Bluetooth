/*
 * DIO.h
 *
 *  Created on: Apr 25, 2021
 *      Author: Ahmed
 */

#ifndef DIO_H_
#define DIO_H_

#include "DIO_CONFIG.h"

void DIO_SetPin_Direction(Uint8t port, Uint8t pin, Uint8t direction);
void DIO_SetPin_Value(	  Uint8t port, Uint8t pin, Uint8t value);
void DIO_TglPin_Vlaue(	  Uint8t port, Uint8t pin);
Uint8t DIO_GetPin_Value(  Uint8t port, Uint8t pin);
void DIO_SET_PULLUP(      Uint8t port, Uint8t pin);

#endif /* DIO_H_ */

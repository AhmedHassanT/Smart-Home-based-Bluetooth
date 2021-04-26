/*
 * BLUETOOTH.h
 *
 *  Created on: Apr 25, 2021
 *      Author: Ahmed
 */

#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_

#include "BLUETOOTH_CONFIG.h"

void BLUETOOTH_Init();
void BLUETOOTH_Transmit(Uint8t data);
Uint8t BLUETOOTH_Recieved(void);




#endif /* BLUETOOTH_H_ */

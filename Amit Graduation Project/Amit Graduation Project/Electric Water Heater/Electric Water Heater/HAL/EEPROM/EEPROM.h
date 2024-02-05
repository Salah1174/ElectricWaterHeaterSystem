/*
 * EEPROM.h
 *
 * Created: 2/6/2024 12:06:22 AM
 *  Author: medos
 */ 


#ifndef EEPROM_H_
#define EEPROM_H_

#include "../../MCAL/I2C/I2C_Driver.h"

void EEPROM_Write (char data, char address);

void EEPROM_Read (char address, char* ptr);

#endif /* EEPROM_H_ */
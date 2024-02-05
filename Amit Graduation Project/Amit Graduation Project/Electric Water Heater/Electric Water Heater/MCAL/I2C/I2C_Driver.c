/*
* I2C_Driver.c
*
* Created: 2/5/2024 11:45:39 AM
*  Author: medos
*/


#include "I2C_Driver.h"


void TWI_Init (void)
{

	//set_bit(TWCR,6);

	TWSR=0;

	TWBR=0x07;

	TWCR|=(1<<TWEN);

}


void TWI_Start (void)
{

	TWCR= (1<<TWINT)|(1<<TWSTA)|(1<<TWEN);

	while (get_bit(TWCR,TWINT)==0)

	{

	}

}




void TWI_Stop (void)
{

	TWCR=(1<<TWSTO)|(1<<TWEN)|(1<<TWINT);

}




void TWI_Write (char data)
{

	TWDR=data;

	TWCR= (1<<TWINT)|(1<<TWEN);

	while (get_bit(TWCR,TWINT)==0)

	{

	}

}




void TWI_Read_Nack (char* ptr) 
{

	TWCR=(1<<TWINT)|(1<<TWEN);

	while (get_bit(TWCR,TWINT)==0)

	{

	}

	*ptr=TWDR;

}




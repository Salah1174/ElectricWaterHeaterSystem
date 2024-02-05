/*
 * STDMACROS.h
 *
 * Created: 9/9/2023 11:25:06 AM
 *  Author: umohs
 */ 


#ifndef STDMACROS_H_
#define STDMACROS_H_

#define set_bit(reg, bit)		(reg = reg | (1<<bit)   )
#define toggle_bit(reg, bit)	(reg = reg ^ (1<<bit)   )
#define clear_bit(reg, bit)		(reg = reg & (~(1<<bit)))
#define read_bit(reg, bit)		(1&(reg>>bit))
#define Toggle_port(port)		(port ^= 0xFF)


#endif /* STDMACROS_H_ */
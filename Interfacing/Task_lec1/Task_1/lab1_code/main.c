/*
 * main.c
 *
 *  Created on: Jul 7, 2024
 *      Author: user
 */
#include <stdio.h>
#include <util/delay.h>

typedef unsigned char u8;

#define DDRB	*((u8*)0x37)
#define PORTB	*((u8*)0x38)
#define PIN		*((u8*)0x36)

int main(void)
{
	DDRB |= (1<<0);
	DDRB |= (1<<1);
	DDRB |= (1<<2);
	DDRB |= (1<<3);
	DDRB |= (1<<4);
	DDRB |= (1<<5);
	DDRB |= (1<<6);
	DDRB |= (1<<7);

	while(1)
	{
		//on led
		PORTB |= (1<<0);
		_delay_ms(10000);
		PORTB |= (1<<1);
		_delay_ms(10000);
		PORTB |= (1<<2);
		_delay_ms(10000);
		PORTB |= (1<<3);
		_delay_ms(10000);
		PORTB |= (1<<4);
		_delay_ms(10000);
		PORTB |= (1<<5);
		_delay_ms(10000);
		PORTB |= (1<<6);
		_delay_ms(10000);
		PORTB |= (1<<7);
		_delay_ms(10000);


		//off led
		PORTB &= ~(1<<0);
		_delay_ms(10000);

		PORTB &= ~(1<<1);
		_delay_ms(10000);

		PORTB &= ~(1<<2);
		_delay_ms(10000);

		PORTB &= ~(1<<3);
		_delay_ms(10000);

		PORTB &= ~(1<<4);
		_delay_ms(10000);

		PORTB &= ~(1<<5);
		_delay_ms(10000);

		PORTB &= ~(1<<6);
		_delay_ms(10000);

		PORTB &= ~(1<<7);
		_delay_ms(10000);

	}

	return 0;
}

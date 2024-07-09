#include <stdio.h>
#include <util/delay.h>

typedef unsigned char u8;

#define DDRD 	 *((u8*)0x31)
#define PORTD	 *((u8*)0x32)
#define PIND   	 *((volatile u8*)0x30)

int main(void)
{
	DDRD |= (1<<0);
	DDRD |= (1<<1);
	DDRD |= (1<<2);
	DDRD |= (1<<3);
	DDRD |= (1<<4);
	DDRD |= (1<<5);
	DDRD |= (1<<6);
	DDRD |= (1<<7);
	while(1)
	{
		//ON LEDS
		PORTD |= (1<<3);
		PORTD |= (1<<4);
		_delay_ms(1000);

		PORTD |= (1<<2);
		PORTD |= (1<<5);
		_delay_ms(1000);

		PORTD |= (1<<1);
		PORTD |= (1<<6);
		_delay_ms(1000);

		PORTD |= (1<<0);
		PORTD |= (1<<7);
		_delay_ms(1000);



		//OFF lEDS

		PORTD &= ~(1<<0);
		PORTD &= ~(1<<7);
		_delay_ms(1000);

		PORTD &= ~(1<<1);
		PORTD &= ~(1<<6);
		_delay_ms(1000);

		PORTD &= ~(1<<2);
		PORTD &= ~(1<<5);
		_delay_ms(1000);

		PORTD &= ~(1<<3);
		PORTD &= ~(1<<4);
		_delay_ms(1000);







	}

	return 0;
}

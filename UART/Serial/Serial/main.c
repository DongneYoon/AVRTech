/*
 * Serial.c
 *
 * Created: 2018-05-11 오후 7:18:13
 * Author : 동네개발자
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	// 0000 1100
	DDRB = 0x0C;
	PORTB = (0<<PB3)|(0<<PB2)|(0<<PB1)|(0<<PB0);
	
	// 1111 1100
	DDRD = 0xFC;
	
	/* Replace with your application code */
	while (1)
	{
		if((PINB & 0x01) && !(PINB & 0x02))
		{
			PORTB = (0<<PB3)|(0<<PB2);
			_delay_ms(20);

			PORTB = (1<<PB3)|(1<<PB2);
			_delay_ms(1);
		}
		
		if(!(PINB & 0x01) && (PINB & 0x02))
		{
			PORTB = (0<<PB3)|(0<<PB2);
			_delay_ms(20);

			PORTB = (1<<PB3)|(1<<PB2);
			_delay_ms(2);
		}


	}
}


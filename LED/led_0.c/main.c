/*
 * led_0.c.c
 *
 * Created: 2018-01-14 오후 6:18:50
 * Author : Dongne Yoon
 * Description : LED Control
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
			DDRB = 0xff;
			PORTB = 0x00;
			
			DDRC = 0xff;
			PORTC  = 0x00;
			
			DDRD = 0xff;
			PORTD = 0xff;
			
			
			
			
    /* Replace with your application code */
    while (1) 
    {
		PORTD= 0xff;
		_delay_us(1000);
		PORTD= 0x00;
		_delay_ms(19);
		
    }
}


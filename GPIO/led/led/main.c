/*
 * led.c
 *
 * Created: 2018-05-10 오후 2:59:57
 * Author : Dongne Yoon
 */ 

 #include <avr/io.h>
 #include <util/delay.h>



 int main(void)
 {
	// Set PORTD output
	DDRD = 0xff;
	PORTD = 0xff;

	 while (1)
	{
		PORTD = (0<<PD7)|(0<<PD6)|(0<<PD5)|(0<<PD4)|(0<<PD3)|(0<<PD2)|(0<<PD1)|(0<<PD0);
		_delay_ms(1000);

		PORTD = (1<<PD7)|(1<<PD6)|(1<<PD5)|(1<<PD4)|(1<<PD3)|(1<<PD2)|(1<<PD1)|(1<<PD0);
		_delay_ms(1000);
	}
 }


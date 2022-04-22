/*
 * AVR1_BlinkLed.c
 *
 * Created: 20-04-2022 18:53:39
 * Author : Lokesh
 */ 

#include <avr/io.h>
#define F_CPU 1000000
#include <util/delay.h>

int main(void)
{
	DDRD = 0xFF;
	
    while(1) 
    {
		PORTD = 0xFF;
		_delay_ms(220);
		_delay_ms(220);
		PORTD = 0x00;
		_delay_ms(220);
		_delay_ms(220);
    }
}


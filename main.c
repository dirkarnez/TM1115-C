#include <p18f4520.h>

void main (void)
{
	int Count = 0;
	int Data = 0;
	TRISB = 0xF0;

	while(1)
	{

		PORTB = 0x08;
		for(Count=0; Count<10000; Count++);
		PORTB = 0x04;
		for(Count=0; Count<10000; Count++);
		PORTB = 0x02;
		for(Count=0; Count<10000; Count++);
		PORTB = 0x01;
		for(Count=0; Count<10000; Count++);

/*
		PORTB = 0x08;
		for(Count=0; Count<10000; Count++);
		PORTB = 0x04;
		for(Count=0; Count<10000; Count++);
		PORTB = 0x02;
		for(Count=0; Count<10000; Count++);
		PORTB = 0x01;
		for(Count=0; Count<10000; Count++);
		PORTB = 0x02;
		for(Count=0; Count<10000; Count++);
		PORTB = 0x04;
		for(Count=0; Count<10000; Count++);
*/
/*

		if(PORTAbits.RA4 == 0) {
			PORTB = 0x02;
			for(Count=0; Count<10000; Count++);
			PORTB = 0x00;
			for(Count=0; Count<10000; Count++);
		} else if(PORTAbits.RA4 == 1) {
			PORTB = 0x00;
		}
*/
	}
}
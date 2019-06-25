/*
 * GccApplication2.c
 *
 * Created: 6/24/2019 9:23:34 PM
 * Author : bhray
 */ 

#include <avr/io.h>

int main(void)
{
	DDRA = 0x00; PORTA = 0xFF; 
	DDRB = 0xFF; PORTB = 0x00; 
	
	unsigned char tempA0 = 0x00;
	unsigned char tempA1 = 0x00;
	unsigned char tempA2 = 0x00;
	unsigned char tempA3 = 0x00;
	unsigned char cntavail = 4;
	
	while(1) {
		
		tempA0 = PINA & 0x01; 
		tempA1 = PINA & 0x02; 
		tempA2 = PINA & 0x04; 
		tempA3 = PINA & 0x08; 
		
		
		if(tempA0 == 0x01) {
			--cntavail;
		}
		
		if(tempA1 == 0x02) {
			--cntavail;
		}
		
		if(tempA2 == 0x04) {
			--cntavail;
		}
		
		if(tempA3 == 0x08) {
			--cntavail;
		}
		
		PORTC = cntavail;
		cntavail = 4; 
	}

}



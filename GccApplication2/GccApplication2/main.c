/*
 * GccApplication2.c
 *
 * Created: 6/24/2019 9:23:34 PM
 * Author : bhray
 */ 

#include <avr/io.h>


int main(void)
{
    DDRA = 0x00; 
	unsigned char cntavail= 0;
	
    while (1) 
    {
		if(PORTA==0x00){
			cntavail=4;
			PORTC= cntavail;
		}
		else if ((PORTA==0x01 )|(PORTA==0x02)|(PORTA==0x04)|(PORTA==0x08)){
			cntavail=3;
			PORTC=cntavail;
		}
		else if((PORTA== 0x03)| (PORTA==0x09)|(PORTA==0x05)|(PORTA==0x06)|(PORTA==0x0A)|(PORTA==0x0C)){
			cntavail=2;
			PORTC=2;
		}
		else if((PORTA== 0x0E)| (PORTA==0x0B)|(PORTA==0x07)|(PORTA==0x0D)){
			cntavail=1;
			PORTC=cntavail;
		}
		else {
		cntavail=0;
		PORTC=cntavail;
	}
    }
}


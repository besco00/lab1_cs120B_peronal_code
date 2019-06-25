/*
 * GccApplication1.c
 *
 * Created: 6/24/2019 3:28:41 PM
 * Author : bhray
 */ 

#include <avr/io.h>
#ifdef _STIMLATE_
#include "simAVRHeader.h"
#endif


int main(void)
{
    
    DDRA= 0x00; //sets the A's as inputs
	DDRB = 0xFF;// sets the B's as outputs
	unsigned char holderA= 0x00;
	unsigned char holderB= 0x00;
	
	//PORTB= 0x00;
	while(1){
		holderA=PINA && 0x01;
		holderB= PINA && 0x02;
		
		if((holderA== 0x01) & !(holderB==0x02)){
			PORTB=0x01;
		}
		else{
			PORTB=0x00;
		}
		 
		
    }
	return 1;
}


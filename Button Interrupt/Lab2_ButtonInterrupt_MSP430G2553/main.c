#include <msp430.h> 


/**
 * main.c
 */

//#ifdef __MSP430G2553
//#define LED1 BIT0;
//#define BUTTON BIT3;
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1DIR |= BIT6; // p1.6 set as output (LED1)

	//P1DIR |= ~BUTTON;

	P1REN = BIT3; // p1 pull up resistor enabled

	P1OUT = BIT3; // set output equal to button

	P1IE = BIT3; // interrupt enabled on p1.3

//	volatile unsigned int i;

	__enable_interrupt();

	for(;;)
	{


//	    if((P1IN & BIT3)!= BIT3)
//	        {
//	            for(i = 50000; i > 0; i-- );
//	            P1OUT ^= BIT6|BIT0;
//	        }

	}


}
//Port 1 ISR
#pragma vector=PORT1_VECTOR
__interrupt void PORT_1(void)
{
    __delay_cycles(500000);
P1OUT ^= BIT6; // toggle the LED2
P1IFG &=~(BIT3); // clear interrupt flag
}

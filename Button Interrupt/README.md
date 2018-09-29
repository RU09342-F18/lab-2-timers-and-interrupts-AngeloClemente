Disclaimer: The code in the .c file does not belong to Angelo Clemente. The code belongs to embeddedprojecthunter.wordpress.com. The comments were edited by Angelo Clemente.

In main, the watchdog timer is turned off. The port 1 direction register is set to BIT6 (LED2 p1.6 is set as an output). The port 1 pull up resistor is enabled by the button at BIT3. Port 1's output is set to BIT3. The port 1 interrupt enable is enabled by the button. The following line of code enables the interrupt algorithm. An infinite while loop is the last part of main.

The code after main is the interrupt statements that run when the button is pressed or released for port 1. The LED2 toggles whenever the button is pressed or released. However, the button does not toggle anytime while the button is held. After toggling, the button disables the interrupt flag.

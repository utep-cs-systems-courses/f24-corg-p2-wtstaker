#include "led.h"
#include <msp430.h>


void init_leds(void) {
    P1DIR |= LEDS; // Set P1.0 and P1.6 as outputs
}

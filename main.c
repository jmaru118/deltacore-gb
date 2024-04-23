#include <gb/gb.h>
#include <stdint.h>
#include <stdio.h>


void main(void)
{
    // Loop forever
    while(1) {


		// Game main loop processing goes here
        printf("Deltacore\n");

		// Done processing, yield CPU and wait for start of next frame
        vsync();
    }
}

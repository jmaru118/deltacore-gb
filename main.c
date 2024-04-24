#include <gb/gb.h>
#include <stdint.h>
#include <stdio.h>


void main(void)
{
    SHOW_BKG;
    DISPLAY_ON;

    printf("Deltacore 3\n");
    // GAME LOOP
    while(1) {

		// Game main loop processing goes here

		// Done processing, yield CPU and wait for start of next frame
        vsync();
    }
}

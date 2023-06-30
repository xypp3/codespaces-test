#include "MicroBit.h"

// The Micro:bit control object
MicroBit uBit;

// Out main function, run at startup
int main() {

    // Loop forever
    while( true ) {
        // Scroll some text on the display
        uBit.display.scroll( "Hello, Will!" );
    }

    // Will never return, but here so the compiler is happy :)
    return 0;
}
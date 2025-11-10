#include <stdio.h>
#include <stdbool.h>

unsigned putubin( unsigned n) {
    if ( n == 0 ) {
        putchar( '0' );
        return 1;
    }
    unsigned digits = 0;
    for ( unsigned bit = ~(~0u >> 1); bit != 0; bit >>= 1 ) {
        bool const is_1 = (n & bit) != 0;
        if( is_1 || digits > 0 ) {
            putchar( '0' + is_1);
            ++digits;
        }
    }
    return digits;
}

int main(void) {
    unsigned value = 0;
    if ( scanf("%u", &value) != 1 ) {
        fputs("Expected an unsigned integer on stdin.\n", stderr);
        return 1;
    }
    putubin(value);
    putchar('\n');
    return 0;
}

#include <stdio.h>


int main(void) {
    for ( unsigned bit = ~(~0u >> 1); bit != 0; bit >>= 1 ) {
        printf("bit - %u\n", bit);
    }
    return 0;
}

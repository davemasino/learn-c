#include <stdio.h>

int main() {

    unsigned none  = 0u;
    unsigned all = ~0u;
    unsigned msb = ~(~0u >> 1);
    unsigned all_shift = (~0u >> 1);
    unsigned zero = (0u >> 1);

    printf("none - %u\n", none);
    printf("all - %u\n", all);
    printf("msb - %u\n", msb);
    printf("all_shift - %u\n", all_shift);
    printf("zero - %u\n", zero);

    unsigned x = 32u;
    unsigned y = x >> 1;
    printf("x - %u\n", x);
    printf("y - %u\n", y);
}
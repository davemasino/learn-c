#include <stdio.h>

void swapi_bad(int a, int b) {      // Incorrect
    int temp = a;
    a = b;
    b = temp;
}

void swapi(int *pa, int *pb) {      // Correct, using pointers
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main() {
    int x = 1, y = 2;
    swapi_bad( x, y );
    printf( "x = %d, y = %d\n", x, y );

    swapi( &x, &y);
    printf( "x = %d, y = %d\n", x, y );
    printf( "&x = %p, &y = %p\n", &x, &y );
}
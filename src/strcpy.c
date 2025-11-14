#include <stdio.h>

char* strcpy_old(char *dst, char const *src) {
    char *const dst_orig = dst;
    while ( true ) {
        *dst = *src;
        if ( *dst == '\0') 
            return dst_orig;
        ++dst;
        ++src;
    }
}

char* strcpy(char *dst, char const *src) {
    char *const dst_orig = dst;
    while( ( *dst++ = *src++ ) ) {
        ;
    }
    return dst;
}

int main() {
    const char s[] = "my test string";
    char d[sizeof s];

    strcpy(d, s);
    printf("%s", d);
}

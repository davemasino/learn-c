#include <stdio.h>

char* strcpy(char *dst, char const *src) {
    char *const dst_orig = dst;
    while ( true ) {
        *dst = *src;
        if ( *dst == '\0') 
            return dst_orig;
        ++dst;
        ++src;
    }
}

int main() {
    const char s[] = "my test string";
    char d[sizeof s];

    strcpy(d, s);
    printf("%s", d);
}

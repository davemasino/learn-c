int main() {
    char nc = 'x';                  // non const
    const char c = nc;              // const

    const char *ncpc;               // non const pointer to const
    ncpc = &nc;
    ncpc = &c;

    const char *const cpc1 = &nc;   // const pointer to const
    const char *const cpc2 = &c;

    char *const cpnc1 = &nc;        // const pointer to non const
    char *const cpnc2 = &c;         // error: discards 'const' qualifier

}
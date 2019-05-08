#include <stdio.h>

void main (void) {
#if 0
    unsigned char uc = 0;
    while (1) {
        printf("%d\n", uc);
        uc = uc + 1;
    }
#elif 0
    char sc = 0;
    while (1) {
        printf("%d\n", sc);
        sc = sc + 1;
    }
#else
    char sc = 0;
    while (1) {
        printf("%d: %c\n", sc, sc);
        sc = sc + 1;
    }
#endif
}

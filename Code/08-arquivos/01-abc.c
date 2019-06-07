#include <stdio.h>

void main (void) {
    FILE* f = fopen("/tmp/arq-01.txt", "w");
    fputc('a', f);
    fputc('b', f);
    fputc('c', f);
    fclose(f);
}

#include <stdio.h>

int main (void) {
    FILE* f = fopen("/tmp/arq-01.txt", "w");
    fputc('a', f);
    fputc('b', f);
    fputc('c', f);
    fclose(f);
    return 0;
}

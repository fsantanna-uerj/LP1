#include <stdio.h>

void main (void) {
    FILE* f = fopen("/tmp/arq-01.xxx", "w");
    printf("%d %c ===> %d\n", 0x61, 'a', 0x61=='a');
    fputc(0x61, f);
    fputc(0x62, f);
    fputc(0x63, f);
    fclose(f);
}

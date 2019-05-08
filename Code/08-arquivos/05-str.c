#include <stdio.h>

void main (void) {
    FILE* f = fopen("arq-02.txt", "w");

    char str1[25] = "Testando 123...\n";
    fputs(str1, f);

    char str2[25] = "Testando 456...\n";
    fputs(str2, f);

    fclose(f);
}

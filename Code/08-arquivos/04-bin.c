#include <stdio.h>

struct Data {
    char dia;
    char mes;
    char ano;
};

void main (void) {
    int v1;
    char v2[13];
    struct Data v3;

    FILE* f = fopen("arq-03.bin", "rb");

    fread(&v1, sizeof(int), 1, f);
    fread(v2, sizeof(char), 12, f);
    v2[12] = '\0';
    fread(&v3, sizeof(struct Data), 1, f);

    fclose(f);

    printf("%X %s (%d/%d/%d)\n", v1, v2, v3.dia, v3.mes, v3.ano);
}

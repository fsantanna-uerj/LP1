#include <stdio.h>
#include <string.h>

struct Pessoa {
    int  idade;
    char nome[51];
};

void main (void) {
    struct Pessoa pessoas[100];

    FILE* f = fopen("01.bin", "rb");
    fread(pessoas, sizeof(struct Pessoa), 100, f);
    fclose(f);

    int i;
    for (i=0; i<100; i++) {
        printf("Pessoa %d %s\n", pessoas[i].idade, pessoas[i].nome);
    }
}


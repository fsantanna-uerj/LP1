#include <stdio.h>
#include <string.h>

struct Pessoa {
    int  idade;
    char nome[51];
};

void main (void) {
    struct Pessoa pessoas[100];
    int N;

    FILE* f = fopen("03.bin", "rb");
    fread(&N, sizeof(int), 1, f);

    for (int i=0; i<N; i++) {
        fread(&pessoas[i].idade, sizeof(int), 1, f);
        char len = fgetc(f);
        fread(pessoas[i].nome, sizeof(char), len, f);
    }

    fclose(f);

    int i;
    for (i=0; i<N; i++) {
        printf("Pessoa %d %s\n", pessoas[i].idade, pessoas[i].nome);
    }
}


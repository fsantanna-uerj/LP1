#include <stdio.h>
#include <string.h>

struct Pessoa {
    int  idade;
    char nome[51];
};

void main (void) {
    struct Pessoa pessoas[100];
    int N;

    FILE* f = fopen("02.bin", "rb");
    fread(&N,      sizeof(int),           1, f);
    fread(pessoas, sizeof(struct Pessoa), N, f);
    fclose(f);

    int i;
    for (i=0; i<N; i++) {
        printf("Pessoa %d %s\n", pessoas[i].idade, pessoas[i].nome);
    }
}


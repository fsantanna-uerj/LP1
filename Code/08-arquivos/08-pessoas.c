#include <stdio.h>
#include <string.h>

struct Pessoa {
    int  idade;
    char nome[51];
};

void main (void) {
    struct Pessoa pessoas[100];

    FILE* f = fopen("arq-07.bin", "rb");

    int N;
    fread(&N, sizeof(int), 1, f);

    int i;
    for (i=0; i<N; i++) {
        fread(&pessoas[i].idade, sizeof(int), 1, f);
        int c = fgetc(f);
        int j;
        for (j=0; c!='\0'; j++) {
            pessoas[i].nome[j] = c;
            c = fgetc(f);
        }
        pessoas[i].nome[j] = '\0';
    }

    fclose(f);

    for (i=0; i<N; i++) {
        printf("Pessoa %d %s\n", pessoas[i].idade, pessoas[i].nome);
    }
}


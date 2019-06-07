#include <stdio.h>
#include <string.h>

struct Pessoa {
    int  idade;
    char nome[51];
};

void main (void) {
    struct Pessoa pessoas[100];

    int N;
    printf("Entre com o numero de pessoas: ");
    scanf("%d", &N);

    int i;
    for (i=0; i<N; i++) {
        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("Nome: ");
        scanf("%s", pessoas[i].nome);
    }
    
    FILE* f = fopen("03.bin", "wb");
    fwrite(&N,      sizeof(int),           1, f);

    for (int i=0; i<N; i++) {
        fwrite(&pessoas[i].idade, sizeof(int), 1, f);
        char len = strlen(pessoas[i].nome);
        fputc(len, f);
        fwrite(&pessoas[i].nome, sizeof(char), len, f);
    }

    fclose(f);
}

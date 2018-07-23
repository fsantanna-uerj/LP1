#include <stdio.h>
#include <string.h>

struct Pessoa {
    int  idade;
    char nome[26];
};

int main (void) {
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
    
    FILE* f = fopen("arq-07.bin", "wb");
    fwrite(&N, sizeof(int), 1, f);
    for (i=0; i<N; i++) {
        fwrite(&pessoas[i].idade, sizeof(int),  1,                         f);
        fwrite(pessoas[i].nome,   sizeof(char), strlen(pessoas[i].nome)+1, f);
    }

    fclose(f);
    return 0;
}

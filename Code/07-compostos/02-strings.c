#include <stdio.h>
#include <string.h>

struct Personagem {
    char nome[20];
    int  forca;
    int  energia;
    int  experiencia;
};

void main (void) {
    struct Personagem p1;
    struct Personagem p2;

    printf("Nome: ");
    scanf("%s", p1.nome);
    strncpy(p2.nome, p1.nome, strlen(p1.nome));

    printf("> %s %s\n", p1.nome, p2.nome);
}

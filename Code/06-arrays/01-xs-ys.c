#include <stdio.h>

void main (void) {
    char senha_secreta[] = "ninguemoquetaaqui";
    int xs[4];
    printf("Qual indice voce quer alterar? ");
    int indice;
    scanf("%d", &indice);
    printf("%d\n", xs[indice]);
}

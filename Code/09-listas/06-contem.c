#include <stdio.h>
#include <stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

void exibe (struct Caixa* caixa) {
    while (caixa != NULL) {
        printf("%d\n", caixa->valor);
        caixa = caixa->prox;
    }
}

int contem (struct Caixa* caixa, int n) {
    while (caixa != NULL) {
        if (n == caixa->valor) {
            return 1;
        }
        caixa = caixa->prox;
    }
    return 0;
}

int main (void) {
    struct Caixa* cabeca = NULL;
    struct Caixa* cauda  = NULL;

    int n;
    scanf("%d", &n);
    while (n != -1) {
        struct Caixa* caixa = malloc(sizeof(struct Caixa));
        caixa->valor = n;
        caixa->prox  = NULL;
        if (cabeca == NULL) {
            cabeca = caixa;
            cauda  = caixa;
        } else {
            cauda->prox = caixa;
            cauda = caixa;
        }
        scanf("%d", &n);
    }

    exibe(cabeca);

    printf("contem 5: %d\n", contem(cabeca,5));
    printf("contem 1: %d\n", contem(cabeca,1));

    return 0;
}

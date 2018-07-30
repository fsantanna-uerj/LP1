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

    return 0;
}

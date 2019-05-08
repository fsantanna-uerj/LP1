#include <stdio.h>

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

void main (void) {
    struct Caixa c4 = { 5, NULL };
    struct Caixa c3 = { 7, &c4 };
    struct Caixa c2 = { 9, &c3 };
    struct Caixa c1 = { 3, &c2 };
    struct Caixa c0 = { 1, &c1 };

    struct Caixa* cabeca = &c0;

    c1.prox = &c3;
    exibe(cabeca);

    printf("---\n");

    c2.prox = &c0;
    cabeca = &c2;
    exibe(cabeca);
}

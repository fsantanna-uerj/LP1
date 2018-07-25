#include <stdio.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

int main (void) {
    struct Caixa c4 = { 5, NULL };
    struct Caixa c3 = { 7, &c4 };
    struct Caixa c2 = { 9, &c3 };
    struct Caixa c1 = { 3, &c2 };
    struct Caixa c0 = { 1, &c1 };

    printf("%d %d %d %d %d\n", c0.valor, c0.prox->valor, c0.prox->prox->valor,
                               c0.prox->prox->prox->valor, c0.prox->prox->prox->prox->valor);

    return 0;
}

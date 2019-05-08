#include <stdio.h>
#include <stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* ante;
    struct Caixa* prox;
};

struct Caixa* cabeca = NULL;

void exibe (struct Caixa* caixa) {
    if (cabeca == NULL) {
        return;
    }
    do {
        printf("%d\n", caixa->valor);
        caixa = caixa->prox;
    } while (caixa != cabeca);
}

int retira (int n) {
    if (cabeca == NULL) {
        return 0;
    }
    struct Caixa* caixa = cabeca;
    do {
        if (n == caixa->valor) {
            if (caixa->prox == caixa) {
                cabeca = NULL;
            } else {
                caixa->ante->prox = caixa->prox;
                caixa->prox->ante = caixa->ante;
                if (caixa == cabeca) {
                    cabeca = caixa->prox;
                }
            }
            free(caixa);
            return 1;
        }
        caixa = caixa->prox;
    } while (caixa != cabeca);
    return 0;
}

void main (void) {
    int n;
    scanf("%d", &n);
    while (n != -1) {
        struct Caixa* caixa = malloc(sizeof(struct Caixa));
        caixa->valor = n;
        if (cabeca == NULL) {
            cabeca = caixa;
            caixa->ante = caixa;
        } else {
            caixa->ante = cabeca->ante;
            cabeca->ante->prox = caixa;
        }
        caixa->prox = cabeca;
        cabeca->ante = caixa;
        scanf("%d", &n);
    }

    exibe(cabeca);

    printf("retira 5: %d\n", retira(5));
    printf("retira 1: %d\n", retira(1));

    exibe(cabeca);

    printf("retira 2: %d\n", retira(2));
    printf("retira 3: %d\n", retira(3));
    printf("retira 4: %d\n", retira(4));

    exibe(cabeca);
}

#include <stdio.h>
#include <string.h>

int f1 (int ys[3][2]) {
    int soma = 0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            soma += ys[i][j];
        }
    }
    return soma;
}

int f2 (int ys[][2], int L) {
    int soma = 0;
    for (int i=0; i<L; i++) {
        for (int j=0; j<2; j++) {
            soma += ys[i][j];
        }
    }
    return soma;
}

int f3 (int* ys, int L, int C) {
    int soma = 0;
    for (int i=0; i<L; i++) {
        for (int j=0; j<C; j++) {
            soma += *(ys + (i*C) + j);
        }
    }
    return soma;
}

void main (void) {
    int vs[3][2] = { {1,2},{3,4},{5,6} };
    int soma = 0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            soma += vs[i][j];
        }
    }
    printf("soma [0] = %d\n", soma);

    printf("soma [1] = %d\n", f1(vs));
    printf("soma [2] = %d\n", f2(vs, 3));
    printf("soma [3] = %d\n", f3((int*)vs, 3, 2));
}

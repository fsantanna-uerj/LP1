#include <stdio.h>

void main (void) {
    int vet[5];
    int N = 0;
    int i;
    for (i=0; i<5; i++) {
        scanf("%d", &vet[i]);
        N++;
    }

    printf("---\n");
    for (i=0; i<N; i++) {
        printf("%d\n", vet[i]);
    }
    printf("---\n");

    int I;
    scanf("%d", &I);
    for (i=I+1; i<N; i++) {
        vet[i-1] = vet[i];
    }
    N--;

    printf("---\n");
    for (i=0; i<N; i++) {
        printf("%d\n", vet[i]);
    }
    printf("---\n");
}

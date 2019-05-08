#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

void main (void) {
    struct Personagem p1;
    p1.forca       = 10;
    p1.energia     = 100;
    p1.experiencia = 0;

    struct Personagem p2;
    p2.forca       = 13;
    //p2.energia     = 150;
    p2.experiencia = 200;

    int k;

    printf("P2> %d %d %d\n", p2.forca, p2.energia, k);
}

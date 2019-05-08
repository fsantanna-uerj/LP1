#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

void main (void) {
    struct Personagem p1;
    scanf("%d", &p1.forca);

    struct Personagem* ptr = &p1;

    printf("%d %d %d\n",
           p1.forca, (*ptr).forca, ptr->forca);
}

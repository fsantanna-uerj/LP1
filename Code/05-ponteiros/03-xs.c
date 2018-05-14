#include <stdio.h>

int main (void) {
    int xs[4];
    int ys[4];
    printf("%p %p\n", &xs, &ys);
    printf("%p\n%p\n%p\n%p\n%p\n%p\n",
           xs, xs+0, xs+1, xs+2, xs+3, xs+4);

    *(xs+3) = 10;   // xs[3]=10
    printf("%d\n", xs[3]);
    return 0;
}

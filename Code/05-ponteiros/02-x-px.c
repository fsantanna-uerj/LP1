#include <stdio.h>

int main (void) {
    int  x  = 10;
    int* px = &x;
    printf("%p %p\n", &x,  px);
    printf("%d %d\n",  x, *px);
    return 0;
}

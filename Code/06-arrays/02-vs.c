#include <stdio.h>

int main (void) {
    int vs[2][3] = { {1,2,3}, {4,5,6} };
    printf("%d %d\n", vs[0][1], vs[1][0]);
    printf("%p %p\n", &vs, &vs[0][0]);
    printf("%p\n",         &vs[0][1]);
    printf("%p\n",         &vs[1][0]);
    return 0;
}

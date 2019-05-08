#include <stdio.h>

int celsius_para_fahrenheit (int c) {
    int f = c * 9/5 + 32;
    return f;
}

void main (void) {
    int C;
    scanf("%d", &C);
    int F = celsius_para_fahrenheit(C);
    printf("%d\n", F);
}

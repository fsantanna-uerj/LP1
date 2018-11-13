#include <stdio.h>

union Identidade  {
    int ifp;
    int cpf;
    int detran;
};

int main (void) {
    union Identidade i1;
    i1.ifp = 117766118;

    union Identidade i2;
    i2.cpf = 1688833355;

    union Identidade i3;
    i3.detran = 555555555;

    printf("> %d %d %d\n", i1.ifp, i2.cpf, i3.detran);

    return 0;
}

#include <stdio.h>
#include <string.h>

union UIdent  {
    int  ifp;
    int  cpf;
    char nome[256];
};

struct Ident1 {
    int sub;
    union UIdent u;
};

struct Ident2 {
    int sub;
    union {
        int  ifp;
        int  cpf;
        char nome[256];
    };
};

struct Ident3 {
    int sub;
    union {
        int  ifp;
        int  cpf;
        char nome[256];
    } u;
};

void main (void) {
    struct Ident1 i1;
        i1.sub = 0;
        i1.u.ifp = 111;
        printf("%d\n", i1.u.ifp);

    struct Ident2 i2;
        i2.sub = 0;
        i2.ifp = 222;
        printf("%d\n", i2.ifp);

    struct Ident3 i3;
        i3.sub = 0;
        i3.u.ifp = 333;
        printf("%d\n", i3.u.ifp);
}

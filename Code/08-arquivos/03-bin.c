#include <stdio.h>
#include <string.h>

// xxd arq-03.bin

struct Data {
    char dia;
    char mes;
    char ano;
};

int main (void) {
    int  v1   = 0x12345678;
    char v2[] = "Felipe Moura";
    struct Data v3 = { 11, 7, 18 };

    FILE* f = fopen("arq-03.bin", "wb");
    fwrite(&v1, sizeof(int),         1,          f);
    fwrite(&v2, sizeof(char),        strlen(v2), f);
    fwrite(&v3, sizeof(struct Data), 1,          f);
    fclose(f);

    return 0;
}

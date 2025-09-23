#include <stdio.h>
#include <string.h>

void main (void) {
    char* src = "alo";
    char dst[255];
    strncpy(dst, src, 255);
    puts(dst);
}

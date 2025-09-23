#include <stdio.h>
#include <string.h>

void main (void) {
    char* src = "alo";
    char dst[255];
    strncpy(dst, "oi", 255);
    strncat(dst, " ", 3);
    strncat(dst, src, 3);
    puts(dst);
}

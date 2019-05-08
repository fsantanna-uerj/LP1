#include <string.h>
#include <stdio.h>

void main (void) {

    char s1[] = {0x97,077,99,0}; //"abc";
    char s2[] = "def";

    printf("%s/%s\n", s1, s2);
    printf("%ld\n", strlen(s1));
    printf("%c %c %c %c %c\n", s1[0], s1[1], s1[2], s1[3], s1[4]);
}

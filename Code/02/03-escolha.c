#include <stdio.h>

void main (void) {
  int num;
  printf("Escolha entre 1-9: ");
  scanf("%d", &num);
  if (num == 5) {
    printf("Voce acertou!\n");
  } else {
    printf("Voce errou!\n");
  }
}

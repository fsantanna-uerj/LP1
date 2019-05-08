#include <stdio.h>

void main (void) {
  int soma = 0;
  int num;
  printf("Escolha um numero: ");
  scanf("%d", &num);
  while (num > 0) {
    soma = (soma + num);
    num = (num - 1);
  }
  printf("somou %d\n", soma);
}

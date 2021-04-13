#include <stdio.h>

int troca(void) {
  // var
  int a = 0, b = 0, c = 0;

  // inicio
  printf("Informe um valor inteiro para a variável A:\n> ");
  scanf("%d", &a);

  printf("Informe um valor inteiro para a variável B:\n> ");
  scanf("%d", &b);

  printf("Você informou: A = %d e B = %d\n", a, b);

  c = a;
  a = b;
  b = c;

  printf("Após a troca: A = %d e B = %d\n", a, b);

  return 0;
  // fim
}
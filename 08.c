#include <stdio.h>

int potencias(void) {
  // var
  int a = 0, a2 = 0, a3 = 0;

  // inicio
  printf("Informe um valor inteiro (a):\n> ");
  scanf("%d", &a);

  a2 = a * a ;
  a3 = a * a * a ;

  printf("%d² = %d\n%d³ = %d\n", a, a2, a, a3);

  return 0;
  // fim
}
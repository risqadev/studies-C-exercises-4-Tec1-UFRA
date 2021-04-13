#include <stdio.h>

int quadrado_da_soma(void) {
  // var
  int a = 0, b = 0, c = 0;

  // inicio
  printf("Informe dois valores inteiros separados por vírgula (a, b):\n> ");
  scanf("%d, %d", &a, &b);

  c = a + b ;
  c *= c ;

  printf("(%d + %d)² = %d;\n", a, b, c);

  return 0;
  // fim
}
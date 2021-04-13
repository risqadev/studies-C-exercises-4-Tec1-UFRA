#include <stdio.h>

int area(void) {
  // var
  float b = 0, h = 0, area = 0;

  // inicio
  printf("Informe base e altura do triângulo separadas por vírgula (b, h):\n> ");
  scanf("%f, %f", &b, &h);

  area = b * h / 2 ;

  printf("Área do triângulo: %f\n", area);

  return 0;
  // fim
}
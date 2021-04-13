#include <stdio.h>

int horas_minutos_segundos(void) {
  // var
  int h = 0, m = 0, s = 0;

  // inicio
  printf("Informe o tempo em segundos:\n> ");
  scanf("%d", &s);

  h = s / 3600;
  s %= 3600;
  m = s / 60;
  s %= 60;

  printf("O evento teve duração de %d horas, %d minutos e %d segundos.\n", h, m, s);

  return 0;
  // fim
}
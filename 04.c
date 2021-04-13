#include <stdio.h>

int idade_dias(void) {
  // var
  int anos = 0, meses = 0, dias = 0;

  // inicio
  printf("Informe a idade em anos, meses e dias (separados por vírgula):\n> ");
  scanf("%d, %d, %d", &anos, &meses, &dias);

  dias = dias + meses * 30 + anos * 365;

  printf("Idade em dias: %d\n", dias);

  return 0;
  // fim
}
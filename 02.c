#include <stdio.h>

int salario(void) {
  // var
  float sal = 0,
        percent = 0;

  // inicio
  printf("Informe o salário:\n> ");
  scanf("%f", &sal);

  printf("Informe o percentual de reajuste (0-100)):\n> ");
  scanf("%f", &percent);

  sal = sal*(1+percent/100);

  printf("O salário reajustado em %.2f%% é $ %.2f\n", percent, sal);

  return 0;
  // fim
}
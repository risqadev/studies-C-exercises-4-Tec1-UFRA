#include <stdio.h>

int custo_final(void) {
  // var
  float valor_fabrica = 0, percent_distrib = 0.28, percent_imposto = 0.45, valor_final = 0;

  // inicio
  printf("Informe o valor de fábrica do veículo:\n> ");
  scanf("%f", &valor_fabrica);

  valor_final = valor_fabrica * (1 + percent_distrib + percent_imposto);

  printf("O valor final é: $ %.2f\n", valor_final);

  return 0;
  // fim
}
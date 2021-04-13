#include <stdio.h>

int salario_liquido(void) {
  // var
  int ht = 0;
  float vh = 0, pd = 0, sb = 0, td = 0, sl = 0;

  // inicio
  printf("Informe a quantidade de horas trabalhadas:\n> ");
  scanf("%d", &ht);

  printf("Informe o valor da hora trabalhada:\n> ");
  scanf("%f", &vh);

  printf("Informe o percentual de desconto (0-100):\n> ");
  scanf("%f", &pd);

  sb = ht * vh ;
  td = sb * pd / 100 ;
  sl = sb - td ;

  printf("Horas trabalhadas: %d\nSalário Bruto: $ %.2f\nDesconto: $ %.2f\nSalário Líquido: $ %.2f\n", ht, sb, td, sl);

  return 0;
  // fim
}
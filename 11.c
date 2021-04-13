#include <stdio.h>

int divida_parcelas(void) {
  // var
  float divida = -1,
        taxa = -1,
        montante = -1,
        parcelas_valor = -1;
  int   parcelas_qtd = -1;

  // inicio
  printf("Informe o valor da dívida:\n> ");
  scanf("%f", &divida);

  if (divida <= 0) {
    printf("ATENÇÃO: o valor da dívida deve ser maior que zero.\n");
    return 0;
  }

  printf("Informe a quantidade de parcelas (1-10):\n> ");
  scanf("%d", &parcelas_qtd);

  switch (parcelas_qtd) {
    case 1 ... 4 :
      taxa = 1.04;
      break;
    case 5 ... 7 :
      taxa = 1.068;
      break;
    case 8 ... 10 :
      taxa = 1.072;
      break;
    default :
      printf("ATENÇÃO: a quantidade de parcelas deve ser um valor inteiro entre 0 e 10.\n");
      return 0;
  }

  montante = divida * taxa;

  parcelas_valor = montante / parcelas_qtd;

  printf("Você pagará %d parcelas de $ %.2f\nMontante da dívida: $ %.2f\n", parcelas_qtd, parcelas_valor, montante);

  return 0;
  // fim
}
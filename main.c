#include <stdio.h>
#include "functions.h"

int main(void) {
  int select = 0;

  printf("\nInforme o programa (nº questão) a ser executado (1-12):\n1 - Área do triângulo\n2 - Reajuste de salário\n3 - Troca de variáveis\n4 - Idade em dias\n5 - Conversão de tempo em segundos\n6 - Custo do veículo\n7 - Cálculo de salário líquido\n8 - Número ao quadrado e ao cubo\n9 - Quadrado da soma\n10 - Conceito de aluno\n11 - Refinanciamento de dívida\n12 - Stranger Campus\n0 - Sair\n> ");
  scanf("%d", &select);

  printf("\n");

  switch (select) {
  case 0 :
    return 0;
    break;
  case 1 :
    printf("#### QUESTÃO 1 - ÁREA DO TRIÂNGULO\n");
    area();

    main();
    break;
  case 2 :
    printf("#### QUESTÃO 2 - REAJUSTE DE SALÁRIO\n");
    salario();

    main();
    break;
  case 3 :
    printf("#### QUESTÃO 3 - TROCA DE VARIÁVEIS\n");
    troca();

    main();
    break;
  case 4 :
    printf("#### QUESTÃO 4 - IDADE EM DIAS\n");
    idade_dias();

    main();
    break;
  case 5 :
    printf("#### QUESTÃO 5 - CONVERSÃO DE TEMPO EM SEGUNDOS\n");
    horas_minutos_segundos();
    
    main();
    break;
  case 6 :
    printf("#### QUESTÃO 6 - CUSTO DO VEÍCULO\n");
    custo_final();

    main();
    break;
  case 7 :
    printf("#### QUESTÃO 7 - CÁLCULO DE SALÁRIO LÍQUIDO\n");
    salario_liquido();

    main();
    break;
  case 8 :
    printf("#### QUESTÃO 8 - NÚMERO AO QUADRADO E AO CUBO\n");
    potencias();

    main();
    break;
  case 9 :
    printf("#### QUESTÃO 9 - QUADRADO DA SOMA\n");
    quadrado_da_soma();

    main();
    break;
  case 10 :
    printf("#### QUESTÃO 10 - CONCEITO DE ALUNO\n");
    // conceito();
    conceito_matriz();

    main();
    break;
  case 11 :
    printf("#### QUESTÃO 11 - REFINANCIAMENTO DE DÍVIDA\n");
    divida_parcelas();

    main();
    break;
  case 12 :
    printf("#### QUESTÃO 12 - STRANGER CAMPUS\n");
    stranger_campus();

    main();
    break;
  default:
    printf("Informe um número inteiro entre 1 e 12.\n");

    main();
    break;
  }

  return 0;
}
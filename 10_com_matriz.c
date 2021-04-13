#include <stdio.h>

int conceito_matriz(void) {
  // var
  float nota = -1;
  int   faltas = -1,
        i = -1,
        j = -1;
  char  conceito = 'n';
  char  matriz[5][3] = {
                        {'A','B','C'},
                        {'B','C','D'},
                        {'C','D','E'},
                        {'D','D','E'},
                        {'D','E','E'}
                       };

  // inicio
  printf("Informe a NOTA do aluno (0-10):\n> ");
  scanf("%f", &nota);

  printf("Informe a quantidade de FALTAS do aluno:\n> ");
  scanf("%d", &faltas);

  if (nota >= 0 && nota <= 10)
    if      (nota >= 9)   i = 0;
    else if (nota >= 7.5) i = 1;
    else if (nota >= 5)   i = 2;
    else if (nota >= 4)   i = 3;
    else                  i = 4;
  else
    printf("ATENÇÃO: a NOTA deve ser um valor entre 0 e 10.\n");
  
  if (faltas >= 0)
    if      (faltas <= 6)  j = 0;
    else if (faltas <= 15) j = 1;
    else                   j = 2;
  else
    printf("ATENÇÃO: a quantidade de FALTAS deve ser maior ou igual a zero.\n");


  if ( i != -1 && j != -1 ) {
    conceito = matriz[i][j];

    printf("Conceito: %c\n", conceito);
  }

  return 0;
  // fim
}

// Para imprimir a matriz, se necessário:
  // for (i=0; i<5; i++) {
  //   for (j=0; j<3; j++) {
  //     printf("%c ", table[i][j]);
  //   }
  //   printf("\n");
  // }
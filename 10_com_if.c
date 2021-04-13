#include <stdio.h>

int conceito(void) {
  // var
  float nota = 0;
  int faltas = 0;
  char conceito = '-';

  // inicio
  printf("Informe a NOTA do aluno (0-10):\n> ");
  scanf("%f", &nota);

  printf("Informe a quantidade de FALTAS do aluno:\n> ");
  scanf("%d", &faltas);

  if ( nota < 0 || nota > 10 || faltas < 0)
    printf("Avalie os dados informados.\n");

  else
    if (nota >= 9)
      if (faltas <= 6)
        conceito = 'A';
      else
        if (faltas <= 15)
          conceito = 'B';
        else
          conceito = 'C';
    else
      if (nota >= 7.5)
        if (faltas <= 6)
          conceito = 'B';
        else
          if (faltas <= 15)
            conceito = 'C';
          else
            conceito = 'D';
      else
        if (nota >= 5)
          if (faltas <= 6)
            conceito = 'C';
          else
            if (faltas <= 15)
              conceito = 'D';
            else
              conceito = 'E';
        else
          if (nota >= 4)
            if (faltas <= 6)
              conceito = 'D';
            else
              if (faltas <= 15)
                conceito = 'D';
              else
                conceito = 'E';
          else
            if (faltas <= 6)
              conceito = 'D';
            else
              if (faltas <= 15)
                conceito = 'E';
              else
                conceito = 'E';

  printf("Conceito: %c\n", conceito);

  return 0;
  // fim
}
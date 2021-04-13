#include <stdio.h>

int stranger_campus(void) {
  // var
  int   idade = -1;
  float peso = -1;
  char  cardiaco = '-',
        sexo = '-',
        gravida = '-';

  // início
  printf("Informe a sua idade (inteiro):\n> ");
  scanf("%d", &idade);

  printf("Informe o seu peso:\n> ");
  scanf("%f", &peso);

  printf("Você possui problemas cardíacos? (s/n)\n> ");
  scanf(" %c", &cardiaco);

  printf("Sexo (m/f):\n> ");
  scanf(" %c", &sexo);

  if (sexo == 'f') {
    printf("Você está grávida? (s/n)\n> ");
    scanf(" %c", &gravida);
  }

  // printf("idade: %d;\npeso: %f;\ncardiaco: %C;\nsexo: %c;\ngravida: %c;\n", idade, peso, cardiaco, sexo, gravida);

  if (
      idade >= 16 && idade <= 69
      && peso >= 50 && peso <= 100
      && cardiaco == 'n'
      && (sexo == 'm' || gravida == 'n')
    )
    printf("Entrada no Stranger Campus AUTORIZADA.\n");
  else
    printf("Entrada no Stranger Campus NÃO AUTORIZADA.\n");

  return 0;
  // fim
}
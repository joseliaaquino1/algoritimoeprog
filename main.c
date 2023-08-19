#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");
  char nome[12] = "Formulário";
  char nome2[30];
  int idade;
  char matricula[15];
  char endereco[120];
  char curso[30];
  char periodo[20];
  char materia[30];
  float mensalidade;

  printf("%s", nome);
  printf("\nDigite o seu nome:");
  fgets(nome2, 30, stdin);

  printf("Digite sua idade %s", nome2);
  scanf("%d", &idade);

  fflush(stdin);
  printf("Digite a sua matricula %s", nome2);
  fgets(matricula, 15, stdin);

  printf("Digite o seu endereço %s", nome2);
  fgets(endereco, 120, stdin);

  printf("Qual curso voce é matriculado?");
  fgets(curso, 30, stdin);

  printf("Qual o periodo?");
  fgets(periodo, 20, stdin);

  printf("De qual matéria é esse formulário?");
  fgets(materia, 30, stdin);

  printf("Qual é o valor da sua mensalidade %s", nome2);
  scanf("%f", &mensalidade);

  printf("Seu nome é:%s", nome2);
  printf("Sua idade é:%d", idade);
  printf("\nSua matricula é:%s", matricula);
  printf("Seu curso é:%s", curso);
  printf("Esse formulário pertence a matéria:%s", materia);
  printf("Sua mensalidade custa:%.2f", mensalidade);

  return 0;
}
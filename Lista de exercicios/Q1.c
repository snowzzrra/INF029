#include <stdio.h>
/*
1) Crie um programa que tenha uma função soma e a função main. A função main deve ler dois valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A função main deve imprimir o resultado da soma.
*/

int soma(int num1, int num2){
  return num1 + num2;
}

int main(void) {
  int num1, num2;
  
  printf("Numero 1: ");
  scanf("%i", &num1);

  printf("Numero 2: ");
  scanf("%i", &num2);

  printf("A soma eh: %i", soma(num1, num2));
  return 0;
}

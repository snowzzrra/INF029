#include <stdio.h>
/*
2) Crie um programa que tenha a função subtrai e a função main. A função main deve ler três valores, enviar para a função subtrai. A função subtrai deve realizar a substração dos três valores (primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o resultado da subtração.
*/

int subtracao(int num1, int num2, int num3){
  return num1 - num2 - num3;
}

int main(void) {
  int num1, num2, num3;
  
  printf("Numero 1: ");
  scanf("%i", &num1);

  printf("Numero 2: ");
  scanf("%i", &num2);

  printf("Numero 3: ");
  scanf("%i", &num3);

  printf("A subtracao eh: %i", subtracao(num1, num2, num3));
  return 0;
}
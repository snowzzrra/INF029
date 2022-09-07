#include <stdio.h>
/*
4) Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor para fazer o retorno.
*/

int ler3Numeros(int *numero) {
  int a, b, c, numeros[3];
  
  printf("Insira o primeiro numero: ");
  scanf("%d", &a);
  printf("\nInsira o segundo numero: ");
  scanf("%d", &b);
  printf("\nInsira o terceiro numero: ");
  scanf("%d", &c);
  
  numero[0] = a;
  numero[1] = b;
  numero[2] = c;
}

int main() {
  int num[3];
  ler3Numeros(num);
  
  for (int i = 0; i < 3; i++) {
    printf("\n%i", num[i]);
  }
  
  return 0;
}
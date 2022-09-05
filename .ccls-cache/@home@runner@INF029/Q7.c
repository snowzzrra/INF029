#include <stdio.h>
#include <string.h>
/*
7) Crie um programa que tenha a função ler3Palavras. Essa função deve ler três palavras do usuário e retornar as três palavras. A função main deve imprimir essas três palavras.
*/

char ler3Palavras(){
  char palavras[3][30];
  printf("1° Palavra: ");
  scanf("%c", &palavras[0]);

  printf("\n2° Palavra: ");
  scanf("%c", &palavras[1]);

  printf("\n3° Palavra: ");
  scanf("%c", &palavras[2]);

  return palavras;
}

int main(){
  char palavras = ler3Palavras();

  printf("\nPrimeira: %c", palavras[0]);
  printf("\nSegunda: %c", palavras[1]);
  printf("\nTerceira: %c", palavras[2]);

  return 0;
}
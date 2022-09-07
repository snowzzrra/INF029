#include <stdio.h>
#include <string.h>
/*
7) Crie um programa que tenha a função ler3Palavras. Essa função deve ler três palavras do usuário e retornar as três palavras. A função main deve imprimir essas três palavras.
*/

struct palavra{
    char palavra1[1];
    char palavra2[1];
    char palavra3[1];
};

struct palavra ler3Palavras(){
  struct palavra palavras;
  printf("1° Palavra: ");
  fgets(palavras.palavra1, 30, stdin);

  printf("\n2° Palavra: ");
  fgets(palavras.palavra2, 30, stdin);

  printf("\n3° Palavra: ");
  fgets(palavras.palavra3, 30, stdin);

  return palavras;
}

int main(){
  struct palavra palavras = ler3Palavras();

  printf("\nPrimeira: %s", palavras.palavra1);
  printf("\nSegunda: %s", palavras.palavra2);
  printf("\nTerceira: %s", palavras.palavra3);

  return 0;
}
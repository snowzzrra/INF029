#include <stdio.h>

/* 
6) Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário e retornar as três letras. A função main deve imprimir essas três letras.
*/

int ler3Letras(char *str) {
  printf("Insira as letras:  \n");
  fgets(str, 50, stdin);
}

int main() {
  char str[3];
  ler3letras(str);
  
  for (int i = 0; i < 3; i++){
    printf("\n%c", str[i]);
  }

  return 0;
}
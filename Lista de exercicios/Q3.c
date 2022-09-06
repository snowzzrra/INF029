#include <stdio.h>
/*
3) Faça um programa que tenha a função que recebe um número inteiro e retorna o fatorial deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial.
*/

int fatorial(int num){
  int fatorial = 1; 

  if (num > 0){
    for (int i = 0; i < num; i++){
      fatorial *= num - i;
    }

    printf("Fatorial: %i", fatorial);
  }

  else
    printf("Erro!");
}

int main(){
  int num; 
  
  printf("Insira o numero: ");
  scanf("%i", &num);

  fatorial(num);
  return 0;
}
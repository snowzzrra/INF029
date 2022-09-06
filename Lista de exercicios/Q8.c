#include <stdio.h>

struct cadastrar{
    char nome[50];
    char dataNasc[20];
    char cpf[15];
    char sexo[1];
};

struct cadastrar cadastrarCliente(){
    struct cadastrar cliente;
    
    printf("Nome: ");
    fgets(cliente.nome, 50, stdin);
    
    printf("Dia de nascimento [DD/MM/AAAA]: ");
    fgets(cliente.dataNasc, 15, stdin); 
    
    printf("CPF [XXX.XXX.XXX-XX]: ");
    fgets(cliente.cpf, 15, stdin);
    fgetc(stdin);
    
    printf("Sexo [M/F]: ");
    fgets(cliente.sexo, 5, stdin);
    
    return cliente;
}

int main() {
    struct cadastrar cliente = cadastrarCliente();
    
    printf("\n\n========== DADOS DO CLIENTE ==========\n");
    printf("Nome: ");
    fputs(cliente.nome, stdout);
    printf("Data de nascimento: ");
    fputs(cliente.dataNasc, stdout);
    printf("CPF: ");
    fputs(cliente.cpf, stdout);
    printf("\nSexo: ");
    fputs(cliente.sexo, stdout);
    
    return 0;
}
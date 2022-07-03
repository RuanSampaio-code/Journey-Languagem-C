#include <stdio.h>

struct Clientes
{
    int matricula;
    float nota1;
    float nota2;
};

struct Clientes aluno;

void imprime(struct Clientes al){
    printf("=====ALUNO=====");
    printf("\nMatricula: %d", al.matricula);
    printf("\nMatricula: %f", al.nota1);
    printf("\nMatricula: %f", al.nota2);
}

void altera (struct Clientes *al){
    printf("\nMatricula: ");
    scanf("%d", &(*al).matricula);
    printf("nota1: ");
    scanf("%f", &(*al).nota1);
    printf("nota2: ");
    scanf("%f", &(*al).nota2);
}

int main()
{   
    int escolha =0;
    printf("====Dado do pedido do cliente===");
    printf("\nNome do Cliente: ");
    scanf("%d", &aluno.matricula);
    printf("nota1: ");
    scanf("%f", &aluno.nota1);
    printf("nota2: ");
    scanf("%f", &aluno.nota2);
   
    imprime(aluno);
    altera(&aluno);
    imprime(aluno);
    return 0;

  
    
}

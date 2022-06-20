// struct 

// gravar 2 notas de um aluno e imprimir media - usando struct

#include <stdio.h>
// declaração da struct
struct Alunos
{
    int matricula;
    float nota1;
    float nota2;

}aluno; // declaração da struct

int main()
{
    printf("Matricula: ");
    scanf ("%d", &aluno.matricula);
    printf("Nota1: ");
    scanf("%f", &aluno.nota1);
    printf("Nota2: ");
    scanf("%f", &aluno.nota2);
    float media;
    media = (aluno.nota1 + aluno.nota2)/2;
    printf("Media: %f", media);
    return 0;
    
}


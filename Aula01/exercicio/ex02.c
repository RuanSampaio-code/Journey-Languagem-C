//programa pra aumento de salario
#include <stdio.h>
int main(int argc, char const *argv[])
{
float salario;
float salariototal;

printf("Digite seu salario: ");
scanf("%f", &salario);

salariototal = (salario*0.2) + salario;

printf("O salario com aumento e %0.2f", salariototal);



    return 0;
}

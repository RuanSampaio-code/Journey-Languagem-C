//programa de um numero ao quadrado
#include <stdio.h>
int main()
{
//delaração de variaveis    
int num;
int num2;

//entrada de dados
printf("Digite um numero: "); 
scanf("%d", &num);

//calculor do num ao quadrado
num2 = num*num;

//saida de dados
printf("Este numero ao quadrado e igual a %d",num2);
   
    return 0;
}

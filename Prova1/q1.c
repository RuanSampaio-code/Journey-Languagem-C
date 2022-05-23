#include <stdio.h>

int main()
{
int num1;
int num2;

printf("Digite o primeiro numero: ");
scanf("%d", &num1);
printf("Digite o segundo numero: ");
scanf("%d", &num2);

if (num1 <num2 ){
    printf("os numeros em ordem crescente: %d, %d",num1,num2);
}else;
if (num2 <num1){
    printf("os numeros em ordem crescente: %d, %d",num2,num1);
}else; 
if(num1==num2){
    printf("Estes numeros são iguais");
}  
else;


    return 0;
}

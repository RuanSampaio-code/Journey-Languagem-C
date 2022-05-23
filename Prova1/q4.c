

#include <stdio.h>

int main()

{
    int vetor[5];
    int number1;
    int number2;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);   
    }
    
     printf("Digite um numero inteiro para verificar se pertence ao vetor: ");
     scanf("%d", &number1);
     printf("Digite um numero inteiro para verificar se pertence ao vetor: ");
     scanf("%d", &number2);

     for ( int i = 0; i < 5; i++)
     {
         if (number1==vetor[i] && number2==vetor[i])
         {
            printf("Os dois numeros pertecem ao vetor ");
         };
         
     
     }
     

    return 0;
} 

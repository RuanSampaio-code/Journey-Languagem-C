#include <stdio.h>

int main()

{
    int vetor[5];
    int pares =0;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);   
    }
    for ( i = 0; i < 5; i++)
    {
        if (vetor[i]%2==0)
        {
            pares = pares +vetor[i];
        }

    }
    printf("A soma dos numeros pares é %d", pares);
    return 0;
}

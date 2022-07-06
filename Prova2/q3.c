#include <stdio.h>

int main()
{
    int termos;
    char palavra;
   
    printf("Determine uma quantidade de vezes para ler uma palavrar: ");
    scanf("%d",&termos);

    for (int i = 0; i <= termos; i++)
    {
        printf("\nDigite uma palavra:");
        fgets(palavra, i,stdin);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{   
    char palavra[100];
    int numvogais = 0;
    int i;
    printf("Digite uma palavra: ");
    scanf(" %s", &palavra);
    

    for (i = 0; i < palavra[15]; i++)
    {
    if(palavra[i]== 'A' || palavra[i]== 'a' || 
       palavra[i]== 'E' || palavra[i]== 'e' || 
       palavra[i]== 'I' || palavra[i]== 'i' ||
       palavra[i]== 'O' || palavra[i]== 'o' || 
       palavra[i]== 'U' || palavra[i]== 'u' );{
       numvogais++;
    }
    printf("%d", numvogais);
    
    return 0;

}

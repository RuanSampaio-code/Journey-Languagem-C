﻿

#include<stdio.h>
#include<string.h>

int main () {  
    char palavra[100];
    int numvogais=0;
    printf("Digite o nome:");  
    scanf("%s",palavra);  
    char vogais [] = {'A','a','E', 'e', 'I','i','O','o','U', 'u'};

    for ( int i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i]==vogais[i])
        {
            numvogais++;
        }
        
    }
    
    printf("total de vogais: %d",numvogais);
return 0;
  }
//for (int i=0; nome[i]!='\0'; i++){
    /*for (int i=0; i<strlen(palavra); i++){
        if(palavra[i]=='A'|| palavra[i]=='a' || 
            palavra[i]=='E'|| palavra[i]=='e' ||
            palavra[i]=='I'|| palavra[i]=='i' || 
            palavra[i]=='O'|| palavra[i]=='o' ||
            palavra[i]=='U'|| palavra[i]=='u' )
            numvogais++;
}  */
/*printf("total de vogais: %d",numvogais);
return 0;
  }*/
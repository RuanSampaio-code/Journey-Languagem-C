
/*
#include<stdio.h>
#include<string.h>

int main () {  
    char palavra[100];
    int numvogais=0;  
    char vogais [] = {'AaEeIiOoUu'};

    printf("Digite o nome:");  
    scanf("%s",palavra);
   
    

  
//for (int i=0; nome[i]!='\0'; i++){
    for (int i=0; i<strlen(palavra); i++){
        if(palavra[i]=='A'|| palavra[i]=='a' || 
            palavra[i]=='E'|| palavra[i]=='e' ||
            palavra[i]=='I'|| palavra[i]=='i' || 
            palavra[i]=='O'|| palavra[i]=='o' ||
            palavra[i]=='U'|| palavra[i]=='u' )
            numvogais++;
}  
printf("total de vogais: %d",numvogais);
return 0;
  }*/
  #include<stdio.h>
#include<string.h>

int main () {  
char nome[80];
char vogais[] ={"aeiouAEIOU"};
int cont=0;
printf("Digite o nome:");  
scanf("%s",nome);  


for (int i=0; i<strlen(nome); i++){
  for (int j=0; j<strlen(vogais); j++){
      if(nome[i]==vogais[j])
       cont++;
      }
}  
printf("total de vogais %d",cont);
return 0;
}
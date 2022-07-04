/*#include <stdio.h>
#include <string.h>

void string(char *frase){
   
   for ( int i = 0; frase[i] !='\0'; i++)
   {
       if (frase ==' ')
       {
           printf("\n", frase);
       }   
       
   }
    
}

int main()
{
    char frase[100];
    printf("Digite uma frase:");
    fgets(&frase, 100, stdin);

    imprimir(frase);
    return 0;
}
*/
#include <stdio.h>
void imprimir(char *frase){

    int i;
    for (i = 0 ; frase[i] !='\0'; i++) {

        switch(frase[i]){
        case ' ':
            frase[i] = '\n';   
            break;

            case '\t':
            frase[i] = '\n';   
            break;
            }
    }
    printf("\n%s", frase);
    }

int main() {
  // função main declarada
  char frase[100];
  
  printf("Digite uma frase: ");
  fgets(frase, 100, stdin);
  imprimir(frase); //chamada de função imprimir com parametro

return 0;
}
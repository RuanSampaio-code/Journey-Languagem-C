/* 
arrays sao assim:
tipo nome[]

uso de indices*/

//imprimindo vetor de tamanho 50:
/*int main(int argc, char const *argv[])
{
    int vetor[50];
    for (int i =0; i<50; i++){ 
        vetor[i] = i;
        printf("%d\n", vetor[i]);
    }
    return 0;
}
*/
// Mostrando valeres de veotr digitado por laçõs
 
//#include <stdio.h>
/*
int main(int argc, char const *argv[])
{

    int vet [4];
    int i;
    // laços para repetição de chamada de numero e armazenar na variavel vet
    for (i = 0; i <4; i++)
    {
        /* code */
        /*
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    printf("Este e o vetor digitado ");
    // saida de dados
    for (i = 0;i <4; i++)
    {
        /* code */
/*        printf("%d  ",vet[i]);
    }
    
    
    return 0;
}
*/


//matrizes vetores multidimensional

#include <stdio.h>

int main(){
    //declarrando matriz 2x2 e variaveis cluna e linha
    int mat[2][2];
    int linha, coluna ;
    int maior;

    printf("Digite os elementos de uma matriz:\n ");
    
     for (linha=0; linha <2; linha++)
         for(coluna =0; coluna<2; coluna++){
             printf("\nElemento[%d][%d]: ", linha, coluna);
             scanf("%d", &mat[linha][coluna]);
         }
    //saida de dados e imprimindo matriz
     printf("\n=====matriz imprimindo=====");
     for (linha=0; linha<2; linha++) 
         for (coluna = 0; coluna < 2; coluna++)
         {
             printf("\nElemento na posição [%d][%d] = %d", linha, coluna, mat[linha][coluna]);
         }
     // maior elemento
    for (linha=0; linha <2; linha++)
            for(coluna =0; coluna<2; coluna++){
                maior =mat[0][0];
               if (/* condition */)
               {
                   /* code */
               }
               
            }
        
return 0;
}

//Strings 
/*
int main(int argc, char const *argv[])
{
    char nome[20];
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Prazer %s", nome);
    return 0;
}*/

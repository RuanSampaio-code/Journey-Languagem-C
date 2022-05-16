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
int main(int argc, char const *argv[])
{

    int vet [4];
    int i;

    // laços para repetição de chamada de numero e armazenar na variavel vet
    for (i = 0; i <4; i++)
    {
        /* code */
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    printf("Este e o vetor digitado ");
    // saida de dados
    for (i = 0;i <4; i++)
    {
        /* code */
        printf("%d  ",vet[i]);
    }
    
    
    return 0;
}


//matrizes vetores multidimensional


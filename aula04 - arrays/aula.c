/* 
arrays sao assim:
tipo nome[]

uso de indices*/

//imprimindo vetor de tamanho 50:
int main(int argc, char const *argv[])
{
    int vetor[50];
    for (int i =0; i<50; i++){ 
        vetor[i] = i;
        printf("%d\n", vetor[i]);
    }
    return 0;
}

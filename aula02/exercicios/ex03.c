int main(int argc, char const *argv[])
{
    //declaração de variaveis
    int numero;
    //chamada de dados 
    printf("Digite um numero e diremos se é par ou imapar: ");
    scanf("%d",&numero);
    if(numero%2==0){
        printf("%d, Este numero é par", numero);
    }
    else
    printf("%d, este numero é impar", numero);
    return 0;
}


int main(int argc, char const *argv[])

{ 
    int i;
    int soma = 0;
    for (i=0;i<=500; i+=2){
       // printf("%d\n",i);
        soma = soma +i; 
   }
   printf("A soma dos numeros de pares entre 1 a 500 e %d", soma);
    return 0;
}

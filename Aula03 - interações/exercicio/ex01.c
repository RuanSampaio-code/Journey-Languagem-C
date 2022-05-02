int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for (int i = 0; i<=num; i++ ){
        if (i%5==0)
            continue;
        else
            printf("%d\n", i);        
    };
    return 0;
}

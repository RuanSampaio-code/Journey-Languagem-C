// laços
// execucao predefinida e condiciona
//tipos : for - predefinida
// sintaxe:
// for (iniciação; condição; inc/dec){
//    comando;
// }
//exemplos:
//int main(int argc, char const *argv[])
//{
//    int x; // a variavel pode ser colocada dentro do laço
//    for (x=1; x<=100; x++){
//        printf("%d", x);
//    }
 //   return 0;

// podemos usar o comando de "," para permitur mais de uma variavel
//int x

    /* code */
//WHILE
//#include <stdio.h>
/*int main()
{
    int x = 1;// d
    while(x<=100){
        printf("%d\n", x);
        x++;
    }
    return 0;
*/
    //taboada
int main(int argc, char const *argv[])
{
    int num;
    int i=0;
    int n=0;
    

    printf ("digite um numero: ");
    scanf("%d", &num);
    while (n<=num)
    {
        while (i<=10)
    {
        printf(" %d*%d = %d\n",num,i, num*i);
        i++;
    }
    i++;        
    }
    
    
    return 0;
 }
    








//desvios incodicionais
/* return, break, continue, goto  */



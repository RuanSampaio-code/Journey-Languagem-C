int main(int argc, char const *argv[])
{
float num1;
float num2;
float num3;

printf("Digite o primeiro numero: ");
scanf("%f", &num1);
printf("Digite o segundo numero: ");
scanf("%f", &num2);
printf("Digite o terceiro numero: ");
scanf("%f", &num3);

if (num1 <num2 && num1<num3 && num2 <num3){
    printf("os numeros em ordem crescente: %f, %f, %f",num1,num2,num3);
}else;
if (num2 <num1 && num2<num3 && num1<num3){
    printf("os numeros em ordem crescente: %f, %f, %f",num2,num1,num3);
}else;   
if (num3 <num1 && num3<num2 && num2<num1){
    printf("os numeros em ordem crescente: %f, %f, %f",num3,num2,num1);
}else;
if (num2>num1 && num2>num3 && num3>num1)
{
     printf("os numeros em ordem crescente: %f, %f, %f",num1,num3,num2);
}else;

//if (num2>num1 && num2>num3 && num3<num1 || num3>num1){
  //  printf("os numeros em ordem crescente: %f, %f, %f",num3,num1,num2);    
//}else;

    return 0;
}

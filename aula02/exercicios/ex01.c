//programa que recebe 3 notase calcula media artimetica e mostra conceitos
int main()
{
//declarando variaveis
float nt1;
float nt2;
float nt3;
float mediari;

//entrada de valores
printf("Digite sua primeira nota: ");
scanf("%f", &nt1);
printf( "Digite sua segunda nota: ");
scanf("%f", &nt2);
printf("Digite sua terceira nota: ");
scanf("%f", &nt3);

//calculo
mediari =(nt1+nt2+nt3)/3;
printf("Sua media e %0.2f", mediari);

//estruturas concionias
if (mediari>=9 || mediari<=10)
    printf("\nConceito A");
    return 0;
}

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
if (nt1 >10 || nt2 > 10 || nt3>10 ){
    printf("Valores invalidos para as notas");
}
else;


if (mediari>=9 && mediari<=10){
    printf("\nConceito A");

    }
else;

if (mediari>=7 && mediari<=8.9){
    printf("\nConceito B");
    }
else;    

if (mediari>=5 && mediari<=6.9){
    printf("\nConceito C");
    }
else;

if (mediari>=0 && mediari<=4.9){
    printf("\nConceito D");
    }
else;    

    return 0;
}

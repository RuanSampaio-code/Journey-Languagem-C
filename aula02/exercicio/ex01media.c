//Prgrama de media artimetica:

float a;
float b;
float c;
float media;

int main() {
printf( "Digite a 1ª nota: ");
scanf("%f", &a);

printf( "Digite a 2ª nota:  ");
scanf("%f", &b);

printf( "Digite a 3ª nota: ");
scanf(" %f", &c); // adicionar espaço na função scanf

media = (a+b+c)/3;

printf("A media das notas e %0.2f", media);

  
  return 0;
}
   
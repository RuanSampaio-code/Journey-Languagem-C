//Prgrama de media artimetica:

// declarando variaveis tipo flutuantes
float a;
float b;
float c;
float media;

//função main
int main() {
printf( "Digite a 1ª nota: "); // impriminndo
scanf("%f", &a);// leitura

printf( "Digite a 2ª nota:  ");
scanf("%f", &b);

printf( "Digite a 3ª nota: ");
scanf("%f", &c); // adicionar espaço na função scanf

media = (a+b+c)/3;

printf("A media das notas e %0.2f", media);

  
  return 0;
}
   
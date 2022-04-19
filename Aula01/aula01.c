//VARIAVEIS E TIPOS EM C
// linguagem fortemente tipada e de Baixo nivel
//tipos: 
//int, valores numericos 
//char, armazena
//float, armazena precisão com presição simples
//double, precisão dupla 
// variaveis são case sensitive, não comecar com numeros 

//estrutura basica para um prigrama

#include <stdio.h>
int main(){
    printf("hello mundo");
    return 0;
}

//saída de dados
printf('mensagem')
//saida com variavel

// para imprimir texto com variavel sempre declaramos o tipo da variavel.
// exemplo: printf("ola mundo %d ", variavel)

//função scanf

#include <stdio.h>

int main() {
    int num;
    printf("digite um numero:");  // a função scanf é similar ao input
    scanf("%f", &num);
    printf("o valor é %0.2f", num);
    return 0;
}
  

  int main() {
  int a;
  float b;
  char c;

  printf( "Digite um numero inteiro: ");
  scanf("%d", &a);

  printf( "Digite um numero flutuante: ");
  scanf("%f", &b);

  printf( "Digite um char: ");
  scanf(" %c", &c); // adicionar espaço na função scanf

  printf("A variável inteira é %d",a);
  printf("\nA variável float é %f",b);
  printf("\nA variável inteira é %c",c);
  
  
    return 0;
}
//Operadores Matemáticos
// incremento: ++
// decrentp --
//Operadores Relacionais 
//Operadores logicos: && - and; || or; negação - not


#include <stdio.h>
 // Ler programa que leia numero inteiro, float e char

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

printf("A media das notas é %f", media);

  
  return 0;
}
   
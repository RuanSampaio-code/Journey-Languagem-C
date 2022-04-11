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
  
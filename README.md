# Journey-Languagem-C
 My journey in Languagem C
#VARIAVEIS E TIPOS EM C
Linguagem fortemente tipada e de Baixo nivel
//tipos: 
//int, valores numericos 
//char, armazena
//float, armazena precisão com presição simples
//double, precisão dupla 
// variaveis são case sensitive, não comecar com numeros 

#Estrutura basica para um prigrama

#include <stdio.h>
int main(){
    printf("hello mundo");
    return 0;
}

#Saída de dados
printf('mensagem')

#Saida com variavel
Para imprimir texto com variavel sempre declaramos o tipo da variavel.
Exemplo: printf("ola mundo %d ", variavel)

#função scanf
leitura de dados.

#include <stdio.h>

int main() {
    int num;
    printf("digite um numero:");  // a função scanf é similar ao input
    scanf("%f", &num);
    printf("o valor é %0.2f", num);
    return 0;
}

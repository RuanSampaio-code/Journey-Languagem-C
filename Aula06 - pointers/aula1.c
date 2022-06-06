//sobre ponteiros

/* 
Conceitos importantes:
 - endereço de memória.
 - declarando variavel ela vai pro espaço vazio(endereço de memoria), colocamos valor a variavel e ela é colocado no espaço de memória.
 - ponteiro é tambem uma variavel especial que guarda somente endereços de memória

Sintaxe:
 - tipo *nomedoponteiro;

Exemplo:
 - int *p;
 - float *ponteiro;
 - char *pont;

Importancia de colocar tipo no ponteiro:

 - cada tipo ocupa especificamente um tamanho de dado

Operadores especiais para ponteiros:
 - *, &
 & - devolve o endereço da memoria do operando.

Operador *:
É um complemento de &, devolve o conteudo localizado no endereço de memoria

Ponteiro sem lixo de memoria:
 - declaramos ponteiro = null

Existe uma relação entre ponteiros e arranjos:

Aritmetica de ponteiros:

ponteiro para ponteiro


*/

int main()
{
    int x=10;
    int *ponteiro; // declarando ponteiro NULO 
    ponteiro = &x; // oponteiro recebe endereço de x

    printf("O endereco de x: %d", &x);
    printf("\nEndereco do ponteiro: %d", ponteiro);
    printf("\nValor do ponteiro %d ", *ponteiro);
    printf("\nValor de x %d", x );
    return 0;
}

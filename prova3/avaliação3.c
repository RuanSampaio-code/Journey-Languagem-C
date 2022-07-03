#include <stdio.h>

struct Clientes
{
    char nome [100];
    char prato [100];
    float valor;
};
struct Clientes pedido;

void imprimir (struct Clientes ped){
    printf("===INFORMACOES DO PEDIDO===");
    printf("\nCliente: %s", ped.nome);
    printf("\nPrato: %s", ped.prato);
    printf("\nValor em R$: %.2f", ped.valor);
}

void altera (struct Clientes *ped){
    printf("\nCliente: ");
    scanf("%s", &(*ped).nome);
    printf("Prato: ");
    scanf("%s", &(*ped).prato);
    printf("Valor: ");
    scanf("%f", &(*ped).valor);
}

int main()
{
   
    printf("====== Bem vindo ao Restaurante =====");   
    printf("\nDigite o nome do cliente: ");
    fgets(&pedido.nome,100,stdin);
    printf("Qual o seu pedido? ");
    fgets(&pedido.prato,100,stdin);
    printf("Valor em reais: ");  
    scanf("%f", &pedido.valor);
    imprimir(pedido);
    return 0;

}

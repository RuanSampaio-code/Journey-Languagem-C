#include <stdio.h>

struct Clientes
{
    char nome [100];
    char prato [100];
    float valor;
};

struct Clientes pedido;

void imprimir (struct Clientes ped){
    printf("\n===INFORMACOES DO PEDIDO===");
    printf("nCliente: %s", ped.nome);
    printf("Prato: %s", ped.prato);
    printf("Valor em R$: %.2f", ped.valor);
}

void altera (struct Clientes *ped){
    printf("\n ======Alterando pedido:======");
    printf("\nCliente: ");
    scanf("%s", &(*ped).nome);
    printf("Prato: ");
    scanf("%s", &(*ped).prato);
    printf("Valor: ");
    scanf("%f", &(*ped).valor);
}

void adcionar(struct Clientes ped){
    printf("\n ======Adicionando novo pedido=====");
    printf("O que mais desejaria? ");
    fgets(&pedido.prato,100,stdin);
    printf("Valor em reais: ");  
    scanf("%f", &pedido.valor);
    imprimir(pedido);

}

int main()
{
    int opcao = 0;
    printf("=========Bem vindo ao Restaurante=====");   
    printf("\nDigite o nome do cliente: ");
    fgets(&pedido.nome,100,stdin);
    printf("Qual o seu pedido? ");
    fgets(&pedido.prato,100,stdin);
    printf("Valor em reais: ");  
    scanf("%f", &pedido.valor);
    imprimir(pedido);

    
    printf("\nVoce gostaria de alterar o pedido? aperte: \n(1) - Alterar \n(2) - Adicionar \n(3) - Finalizar  \n");
    scanf("%d", &opcao);
    if (opcao==1)
        altera(&pedido);
    else if (opcao ==2)
        adcionar(pedido);
    else if (opcao ==3)
        printf("Pedido finalizado, Obrigado pela Compra!!");

    return 0;

}

#include <stdio.h>
struct Clientes
{
    char nome [100];
    char prato [100];
    float valor;
};

struct Clientes pedido;

void imprimir (struct Clientes ped){
    printf("\n===== |INFORMACOES DO PEDIDO| =====\n");
    printf("\nCliente: %s", ped.nome);
    printf("\nPrato: %s", ped.prato);
    printf("\nValor em R$: %.2f", ped.valor);
}

void altera (struct Clientes *ped){
    printf("\n ======Alterando pedido:======\n");
    printf("Cliente: ");
    scanf("%s", &(*ped).nome);
    printf("Prato: ");
    scanf("%s", &(*ped).prato);
    printf("Valor: ");
    scanf("%f", &(*ped).valor);
    imprimir(pedido);
}

void adcionar(struct Clientes ped){
    printf("\n ======Adicionando novo pedido=====\n");
    printf("\nNovo Prato: ");
    scanf("%s", &pedido.prato); 
    printf("\nValor em reais: ");  
    scanf("%f", &pedido.valor);
    imprimir(pedido);
}

int main()
{
    int opcao = 0;
    int pagamento =0;
    printf("========= || Bem vindo ao nosso Restaurante! || =====");   
    printf("\nDigite o nome do cliente: ");
    fgets(&pedido.nome,100,stdin);
    printf("Qual o seu pedido?  ");
    fgets(&pedido.prato,100,stdin);
    printf("Valor em reais: ");  
    scanf("%f", &pedido.valor);
    imprimir(pedido);

    printf("\n\n====================================");
    printf("\n\nO que voce gostaria? Digite: \n(1) - Alterar o pedido \n(2) - Adicionar mais um pedido \n(3) - Finalizar  \n");
    scanf("%d", &opcao);
    if (opcao==1)
        altera(&pedido);
    else if (opcao ==2)
        adcionar(pedido);
    else if (opcao ==3)
        printf("\nPedido finalizado.");
        printf("\nQual a forma de pagamento? \n(1) - Cartao de debido \n(2) - Cartao de credito \n(3) - Boleto/Dinheiro/Pix \n");
        scanf("%d", &pagamento);
        if ( pagamento==1 || pagamento==2 || pagamento==3)
            printf("Pagamento realizado, Obrigado pela preferencia, Volte sempre!");
    return 0;

}

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int codigo;
    char nome[50];
    char cpf[15];
} Cliente;

typedef struct{
    int codigo;
    char descricao[100];
    float preco;
    float qtdEstoque;
} Produto;

typedef struct{
    int codigo;
    int codCliente;
    int codProduto;
    float quantidade;
    float desconto;
    float vlrTotal;
} Pedido;

Cliente cliente1[5];
Produto produto1[5];
Pedido pedido1[5];

int main(){
    int opc;

    while(opc != 7){
        opc = menu();
        executaOpcao(opc);
    }

    return 0;
}

int menu(){
    int opcao = 0;
    system("cls");
    printf("** MENU **\n");
    printf("1 - Cadastrar Cliente\n");
    printf("2 - Cadastrar Produto\n");
    printf("3 - Cadastrar Pedido\n");
    printf("4 - Consulta Cliente\n");
    printf("5 - Consulta Produto\n");
    printf("6 - Consulta Pedido\n");
    printf("7 - Sair\n");
    printf("Informe a opcao desejada: ");
    scanf("%d", &opcao);

    return opcao;
}

void executaOpcao(int opc){
    int aux;
    switch(opc){
        case 1:
            printf("Informe a posicao (0-4):");
            scanf("%d", &aux);

            cliente1[aux].codigo = aux;
            printf("Cadastro de Cliente\n");
            printf("Informe o nome:");
            fflush(stdin);
            scanf("%[^\n]s", cliente1[aux].nome);
            printf("Informe o cpf:");
            fflush(stdin);
            scanf("%[^\n]s", cliente1[aux].cpf);
            system("pause");
        break;
        case 2:
            printf("Cadastro de Produto\n");
            cadastraProduto();
            system("pause");
        break;
        case 3:
            printf("Cadastro de Pedido\n");
            cadastroPedido();
            system("pause");
        break;
        case 4:
            printf("Consulta Cliente\n");
            printf("informe a posicao que deseja consultar:");
            scanf("%d", &aux);
            printf("Codigo: %d\n", cliente1[aux].codigo);
            printf("Nome: %s\n", cliente1[aux].nome);
            printf("CPF: %s\n", cliente1[aux].cpf);
            system("pause");
        break;
        case 5:
            printf("Consulta Produto\n");
            printf("informe a posicao que deseja consultar:");
            scanf("%d", &aux);
            printf("Codigo: %d\n", produto1[aux].codigo);
            printf("Descricao: %s\n", produto1[aux].descricao);
            printf("Preco: %.2f\n", produto1[aux].preco);
            printf("Quantidade Estoque: %.2f\n", produto1[aux].qtdEstoque);
            system("pause");
        break;
        case 6:
            printf("Consulta Pedido\n");
            printf("informe a posicao que deseja consultar:");
            scanf("%d", &aux);
            printf("Codigo: %d\n", pedido1[aux].codigo);
            printf("Cliente: %s\n", cliente1[pedido1[aux].codCliente].nome);
            printf("Produto: %s\n", produto1[pedido1[aux].codProduto].descricao);
            printf("Preco Unit.: %.2f\n", produto1[pedido1[aux].codProduto].preco);
            printf("Qtde.: %.2f\n", pedido1[aux].quantidade);
            printf("Desconto: %.2f%\n", pedido1[aux].desconto);
            printf("Vlr. Total: %.2f\n", pedido1[aux].vlrTotal);
            system("pause");
        break;
        case 7:
            printf("Finalizando Programa\n");
            system("pause");
        break;
        default:
            printf("Opcao Invalida\n");
            system("pause");
        break;
    };
}

void cadastraProduto(){
    int aux;

    printf("Informe a posicao (0-4):");
    scanf("%d", &aux);

    printf("Informe o codigo:");
    scanf("%d", &produto1[aux].codigo);
    printf("Informe a descricao:");
    fflush(stdin);
    scanf("%[^\n]s", produto1[aux].descricao);
    printf("Informe o preco unitario:");
    scanf("%f", &produto1[aux].preco);
    printf("Informe a quantidade em estoque:");
    scanf("%f", &produto1[aux].qtdEstoque);
}

void  cadastroPedido(){
    int aux;

    printf("Informe a posicao (0-4):");
    scanf("%d", &aux);

    printf("Informe o codigo:");
    scanf("%d", &pedido1[aux].codigo);
    printf("Informe o cliente:");
    scanf("%d", &pedido1[aux].codCliente);
    printf("Informe o produto:");
    scanf("%d", &pedido1[aux].codProduto);
    do{
        printf("Informe a quantidade:");
        scanf("%f", &pedido1[aux].quantidade);
        if(produto1[pedido1[aux].codProduto].qtdEstoque < pedido1[aux].quantidade){
            printf("Quantidade invalida, quantidade maior que o estoque!\n");
        }
    }while(pedido1[aux].quantidade > produto1[pedido1[aux].codProduto].qtdEstoque);
    printf("Informe o desconto:");
    scanf("%f", &pedido1[aux].desconto);

    produto1[pedido1[aux].codProduto].qtdEstoque -= pedido1[aux].quantidade;

    pedido1[aux].vlrTotal = (pedido1[aux].quantidade * produto1[pedido1[aux].codProduto].preco) * (1-(pedido1[aux].desconto/100));

}

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
Produto produto1;
Pedido pedido1;

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
            printf("Codigo: %d\n", produto1.codigo);
            printf("Descricao: %s\n", produto1.descricao);
            printf("Preco: %.2f\n", produto1.preco);
            printf("Quantidade Estoque: %.2f\n", produto1.qtdEstoque);
            system("pause");
        break;
        case 6:
            printf("Consulta Pedido\n");
            printf("Código: %d\n", pedido1.codigo);
            //printf("Cliente: %s\n", cliente1.nome);
            printf("Produto: %s\n", produto1.descricao);
            printf("Preco Unit.: %.2f\n", produto1.preco);
            printf("Qtde.: %.2f\n", pedido1.quantidade);
            printf("Desconto: %.2f%\n", pedido1.desconto);
            printf("Vlr. Total: %.2f\n", pedido1.vlrTotal);
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
    printf("Informe o codigo:");
    scanf("%d", &produto1.codigo);
    printf("Informe a descricao:");
    fflush(stdin);
    scanf("%[^\n]s", produto1.descricao);
    printf("Informe o preco unitario:");
    scanf("%f", &produto1.preco);
    printf("Informe a quantidade em estoque:");
    scanf("%f", &produto1.qtdEstoque);
}

void  cadastroPedido(){
    printf("Informe o codigo:");
    scanf("%d", &pedido1.codigo);
    printf("Informe o cliente:");
    scanf("%d", &pedido1.codCliente);
    printf("Informe o produto:");
    scanf("%d", &pedido1.codProduto);
    do{
        printf("Informe a quantidade:");
        scanf("%f", &pedido1.quantidade);
        if(produto1.qtdEstoque < pedido1.quantidade){
            printf("Quantidade invalida, quantidade maior que o estoque!\n");
        }
    }while(pedido1.quantidade > produto1.qtdEstoque);
    printf("Informe o desconto:");
    scanf("%f", &pedido1.desconto);

    produto1.qtdEstoque -= pedido1.quantidade;

    pedido1.vlrTotal = (pedido1.quantidade * produto1.preco) * (1-(pedido1.desconto/100));

}

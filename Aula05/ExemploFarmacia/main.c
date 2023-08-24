#include <stdio.h>
#include <stdlib.h>

typedef struct{
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
    int codCliente;
    int codProduto;
    float quantidade;
    float desconto;
    float vlrTotal;
} Pedido;

Cliente cliente1;
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
    switch(opc){
        case 1:
            printf("Cadastro de Cliente\n");
            printf("Informe o nome:");
            scanf("%[^\n]s", &cliente1.nome);
            printf("Informe o cpf:");
            scanf("%[^\n]s", &cliente1.cpf);
            system("pause");
        break;
        case 2:
            printf("Cadastro de Produto\n");
            cadastraProduto();
            system("pause");
        break;
        case 3:
            printf("Cadastro de Pedido\n");
            system("pause");
        break;
        case 4:
            printf("Consulta Cliente\n");
            system("pause");
        break;
        case 5:
            printf("Consulta Produto\n");
            system("pause");
        break;
        case 6:
            printf("Consulta Pedido\n");
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
    printf("Informe a descrição:");
    scanf("%[^\n]s", &produto1.descricao);
    printf("Informe o preco unitario:");
    scanf("%f", &produto1.preco);
    printf("Informe a quantidade em estoque:");
    scanf("%f", &produto1.qtdEstoque);
}


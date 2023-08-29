#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float valor1;
    float valor2;
    float resultado;
    int operacao;
} Calc;

Calc calculadora[5];

enum operacao {SOMA = 1, SUBTRAI, DIVIDE, MULTIPLICA};

int main(){
    int opcao = 0, aux;

    while(opcao != 3){
        system("cls");
        printf("** MENU **\n");
        printf("1 - Cadastrar Operacao\n");
        printf("2 - Consultar Resultado\n");
        printf("3 - Sair\n");
        printf("Informe a opcao desejada: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Informe a posicao (0-4):");
                scanf("%d", &aux);

                printf("Informe o primeiro valor:");
                scanf("%f", &calculadora[aux].valor1);
                printf("Informe o segundo valor:");
                scanf("%f", &calculadora[aux].valor2);

                printf("Informe a operacao (1- Soma / 2- Subtracao / 3- Divisao / 4- Multiplicacao): ");
                scanf("%d", &calculadora[aux].operacao);

                switch(calculadora[aux].operacao){
                    case SOMA:
                        calculadora[aux].resultado = calculadora[aux].valor1 + calculadora[aux].valor2;
                    break;
                    case SUBTRAI:
                        calculadora[aux].resultado = calculadora[aux].valor1 - calculadora[aux].valor2;
                    break;
                    case DIVIDE:
                        calculadora[aux].resultado = calculadora[aux].valor1 / calculadora[aux].valor2;
                    break;
                    case MULTIPLICA:
                        calculadora[aux].resultado = calculadora[aux].valor1 * calculadora[aux].valor2;
                    break;
                }

            break;
            case 2:
                printf("Informe a posicao (0-4):");
                scanf("%d", &aux);
                printf("%.2f ", calculadora[aux].valor1);
                switch(calculadora[aux].operacao){
                    case SOMA:
                        printf("+ ");
                    break;
                    case SUBTRAI:
                        printf("- ");
                    break;
                    case DIVIDE:
                        printf("/ ");
                    break;
                    case MULTIPLICA:
                        printf("* ", calculadora[aux].valor1);
                    break;
                }
                printf("%.2f = %.2f", calculadora[aux].valor2, calculadora[aux].resultado);
            break;
        };
        system("pause");

    }


    return 0;
}

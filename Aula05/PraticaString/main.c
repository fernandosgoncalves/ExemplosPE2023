#include <stdio.h>
#include <stdlib.h>

int main(){
    char c1[10], c2[10], c3[25]; //Declara��o de var�veis

    //Entrada de dados String
    printf("Informe o primeiro texto: ");
    scanf("%[^\n]s", &c1);

    printf("Informe o segundo texto: ");
    fflush(stdin);
    gets(c2);

    //Concatena��o das strings C1 e C2 em C3
    //A vari�vel da esquerda � quem recebe o valor copiado
    strcat(c3, c1);
    strcat(c3, " ");
    strcat(c3, c2);

    //Apresenta��o dos dados
    printf("C1: %s\n", c1);
    printf("Tamanho C1: %d\n", strlen(c1));

    printf("C2: %s\n", c2);
    printf("Tamanho C2: %d\n", strlen(c2));

    printf("C3: %s\n", c3);
    printf("Tamanho C3: %d\n", strlen(c3));

    return 0;
}

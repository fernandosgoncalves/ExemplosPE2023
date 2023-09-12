#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int valor1, valor2, resultado;
    char operacao;

    if(argc < 4){
        printf("Sem parametros!");
        exit(1);
    }else{
        valor1 = atoi(argv[1]);
        valor2 = atoi(argv[3]);
    }

    printf("%d %s %d", valor1, argv[2], valor2);

    switch(argv[2][0]){
        case '+':
            resultado = valor1 + valor2;
            printf(" = %d", resultado);
        break;
        case '-':
            resultado = valor1 - valor2;
            printf(" = %d", resultado);
        break;
        case 'x':
            resultado = valor1 * valor2;
            printf(" = %d", resultado);
        break;
        case '/':
            resultado = valor1 / valor2;
            printf(" = %d", resultado);
        break;
    }

    return 0;
}

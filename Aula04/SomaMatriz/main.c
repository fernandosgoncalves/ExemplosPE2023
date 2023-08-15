#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3];
    int soma = 0;

    for(int c=0; c<3; c++){
        for(int l=0; l<3; l++){
            printf("Informe o valor [%d,%d]:", c, l);
            scanf("%d", &matriz[c][l]);
        }
    }

     for(int c=0; c<3; c++){
        for(int l=0; l<3; l++){
            printf("%d ", matriz[c][l]);
            soma += matriz[c][l];
        }
        printf("\n");
    }

    printf("A soma da matriz e: %d\n", soma);
    return 0;
}

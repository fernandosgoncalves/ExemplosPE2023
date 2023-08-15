#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int matriz[3][2];

    for(int l=0; l<2; l++){
        for(int c=0; c<3; c++){
            printf("Informe o valor da posição [%d, %d]:", c, l);
            scanf("%d", &matriz[c][l]);
        }
    }

    for(int l=0; l<2; l++){
        for(int c=0; c<3; c++){
            printf("%d ", matriz[c][l]);
        }
        printf("\n");
    }


    return 0;
}

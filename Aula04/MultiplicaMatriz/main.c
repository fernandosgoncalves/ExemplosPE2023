#include <stdio.h>
#include <stdlib.h>

const int C = 2;
const int L = 2;

int main(){
    int ma[C][L], mb[C][L], mr[C][L];

    for(int l=0; l<L; l++){
        for(int c=0; c<C; c++){
            printf("Informe o valor A [%d,%d]:", c, l);
            scanf("%d", &ma[c][l]);
        }
    }

    for(int l=0; l<L; l++){
        for(int c=0; c<C; c++){
            printf("Informe o valor B [%d,%d]:", c, l);
            scanf("%d", &mb[c][l]);
        }
    }

    int resultado = 0;

    for(int l=0; l<L; l++){
        for(int c=0; c<C; c++){
            resultado = 0;
            for(int x=0; x<C; x++){
                resultado += ma[x][l] * mb[c][x];
            }
            mr[c][l] = resultado;
        }
    }

    for(int l=0; l<L; l++){
        for(int c=0; c<C; c++){
            printf("%d ", ma[c][l]);
        }
        printf("\n");
    }

    printf("\n");

    for(int l=0; l<L; l++){
        for(int c=0; c<C; c++){
            printf("%d ", mb[c][l]);
        }
        printf("\n");
    }

    printf("\n");

    for(int l=0; l<L; l++){
        for(int c=0; c<C; c++){
            printf("%d ", mr[c][l]);
        }
        printf("\n");
    }

    return 0;
}

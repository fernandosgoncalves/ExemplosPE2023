#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(){
    int lista[TAM] = {-5, 22, 15, -7, 49};
    int min, max, *pMin, *pMax;

    pMin = &min;
    pMax = &max;

    busca(lista, pMin, pMax);

    printf("Minimo: %d\n", min);
    printf("Maximo: %d\n", max);
    return 0;
}

void busca(int lista[TAM], int *min, int *max){
    for(int i=0; i<TAM; i++){
        if(i==0){
            *min = lista[i];
            *max = lista[i];
        }else{
            if(lista[i] > *max)
                *max = lista[i];

            if(lista[i] < *min)
                *min = lista[i];
        }
    }
}

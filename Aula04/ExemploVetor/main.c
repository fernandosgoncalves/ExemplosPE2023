#include <stdio.h>
#include <stdlib.h>

const int TAM = 5;

int main(){
    int lista[TAM];
    int aux;

    for(int i=0; i<TAM; i++){
        printf("Informe o valor %d:", i+1);
        scanf("%d", &lista[i]);
    }

    for(int x = 1; x < TAM; x++){
        for(int y = 0; y < TAM -1; y++){
            if(lista[y] > lista[y+1]){
                aux = lista[y];
                lista[y] = lista[y+1];
                lista[y+1] = aux;
            }
        }
    }

    for(int i=0; i<TAM; i++){
        printf("%d ", lista[i]);
    }

    return 0;
}

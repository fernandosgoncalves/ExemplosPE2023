#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5

void inverteOrdem(int lista[], int posInit, int posFim);
void imprimir(int lista[], int tam);
void ordena(int lista[], int tam);

int main(){
    setlocale(LC_ALL, "portuguese");

    //Criação da lista
    int lista[TAM];

    //Laço para entrada de dados
    for(int i=0; i<TAM; i++){
        printf("Informe um número: ");
        scanf("%d", &lista[i]);
    }

    //Imprime a lista antes da troca
    printf("Antes \n");
    imprimir(lista, TAM);

    //Chamada da função
    inverteOrdem(&lista, 0, TAM-1);

    //Imprime a lista após a inversão
    printf("\nDepois \n");
    imprimir(lista, TAM);

    printf("\nLista Ordenada\n");
    //Chamada da função
    ordena(lista, TAM);

    imprimir(lista, TAM);

    return 0;
}

void inverteOrdem(int lista[], int posInit, int posFim){
    int aux;
    if(posInit < posFim){
        //Enquanto a função na chegar no meio da lista
        aux = lista[posInit];
        lista[posInit] = lista[posFim];
        lista[posFim] = aux;
        inverteOrdem(lista, posInit+1, posFim-1);
    }
}

void imprimir(int lista[], int tam){
    for(int i=0; i<tam; i++){
        printf("%d ",lista[i]);
    }
}

void ordena(int lista[], int tam){
    int aux;

    for(int i = 1; i < tam; i++){
        for(int x = 0; x < tam-1; x++){
                //printf("\n%d - %d\n", lista[x], lista[x+1]);
            if(lista[x] > lista[x + 1]){
                //printf("Entrou\n");
                aux = lista[x];
                lista[x] = lista[x+1];
                lista[x+1] = aux;
            }
        }
    }
}

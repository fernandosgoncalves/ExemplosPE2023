#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titulo[50];
    char editora[30];
    int ano;
}LIVRO;

int main(){
    LIVRO *lista;

    lista = calloc(3, sizeof(LIVRO));

    lista->ano = 2020;
    strcpy(lista->editora, "Planeta");
    strcpy(lista->titulo, "C total e completo");

    lista++;

    lista->ano = 2015;
    strcpy(lista->editora, "IFSC");
    strcpy(lista->titulo, "C como programar");

    lista++;

    lista->ano = 2019;
    strcpy(lista->editora, "Atica");
    strcpy(lista->titulo, "Dom Casmurro");

    lista-=2;

    for(int i=0; i<3;i++){
        printf("Titulo: %s - Editora: %s - Ano: %d\n", lista[i].titulo,
               lista[i].editora, lista[i].ano);
    }
    return 0;
}

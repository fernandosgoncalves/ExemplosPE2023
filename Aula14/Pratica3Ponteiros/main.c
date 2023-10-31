#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int main(){
    char texto[TAM];
    char *trocaTexto;

    trocaTexto = &texto;

    printf("Informe um texto:");
    fflush(stdin);
    gets(texto);

    printf("Antes: %s\n", texto);

    troca(trocaTexto);

    printf("Depois: %s\n", texto);

    return 0;
}

void troca(char *troca){
    for(int i=0; i< TAM; i++){
        switch(troca[i]){
            case 'a':
                troca[i] = 'o';
            break;
            case 'e':
                troca[i] = 'i';
            break;
            case 'i':
                troca[i] = 'u';
            break;
            case 'o':
                troca[i] = 'e';
            break;
            case 'u':
                troca[i] = 'a';
            break;
        };

    }

}

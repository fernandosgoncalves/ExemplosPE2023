#include <stdio.h>
#include <stdlib.h>

enum dias {DOM =1, SEG, TER, QUA, QUI, SEX, SAB};

int main(){
    int aux;

    printf("Informe um valor (1-7):");
    scanf("%d", &aux);

    switch(aux){
        case DOM:
            printf("Domingo\n");
        break;
        case SEG:
            printf("Segunda-feira\n");
        break;
        case TER:
            printf("Terca-feira\n");
        break;
        case QUA:
            printf("Quarta-feira\n");
        break;
        case QUI:
            printf("Quinta-feira\n");
        break;
        case SEX:
            printf("Sexta-feira\n");
        break;
        case SAB:
            printf("Sabado\n");
        break;
    }

    return 0;
}

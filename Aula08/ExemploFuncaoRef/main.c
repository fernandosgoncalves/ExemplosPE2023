#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);

int main(){
    int valor1 = 10;
    int valor2 = 20;

    printf("Valor1: %d\n", valor1);
    printf("Valor2: %d\n", valor2);

    swap(&valor1, &valor2);

    printf("Valor1: %d\n", valor1);
    printf("Valor2: %d\n", valor2);

    swap(&valor1, &valor2);

    printf("Valor1: %d\n", valor1);
    printf("Valor2: %d\n", valor2);
    return 0;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

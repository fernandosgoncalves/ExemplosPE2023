#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ponteiro1, *ponteiro2;

    int valor1 = 10, valor2 = 20;

    float x = 8.95, y = 15;
    float *p, *z;

    p = &x;
    z = &y;

    printf("x = %.2f y = %.2f\n", x, y);

    soma(p, z);

    printf("x = %.2f y = %.2f\n", x, y);

    soma2(x, y);

    printf("x = %.2f y = %.2f\n", x, y);



    ponteiro1 = &valor1;
    ponteiro2 = &valor2;

    ponteiro1 = &valor2;
    ponteiro2 = &valor1;

    valor2 = 35;
    *ponteiro1 = 5;

    printf("Valor 1: %d\n", *ponteiro1);
    printf("Valor 2: %d\n", *ponteiro2);
    return 0;
}

void soma(float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux + *a;
}

void soma2(float a, float b){
    float aux;
    aux = a;
    a = b;
    b = aux;
}

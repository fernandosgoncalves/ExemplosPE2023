#include <stdio.h>
#include <stdlib.h>

float soma(float v1, float v2){
    return v1+v2;
}

float divide(float a, float b);

int main(){
    float a, b, c, d, resultado;

    printf("Informe o primeiro valor: ");
    scanf("%f", &a);
    printf("Informe o segundo valor: ");
    scanf("%f", &b);
    printf("Informe o terceiro valor: ");
    scanf("%f", &c);
    printf("Informe o quarto valor: ");
    scanf("%f", &d);

    /*a = soma(a,b);
    c = soma(c,d);
    printf("(a+b)/(c+d) = %.2f", divide(a,c));*/


    resultado = divide(soma(a,b), soma(c,d));
    printf("(a+b)/(c+d) = %.2f", resultado);

    return 0;
}

float divide(float a, float b){
    float resultado;
    resultado = a/b;
    return resultado;
}

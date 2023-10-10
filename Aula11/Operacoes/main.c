#include "operacoes.h"

float soma(float a, float b){
    return a+b;
}

float divide(float a, float b){
    float resultado;

    resultado = a / b;
    return resultado;
}

float multiplica(float a, float b){
    return a*b;
}

float lerNumero(){
    float valor;
    printf("Informe um numero:");
    scanf("%f", &valor);
    return valor;
}



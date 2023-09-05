#include <stdio.h>
#include <stdlib.h>

float informaTemperatura();
void verificaTemperatura(float temp);

int main(){
    float temp = informaTemperatura();
    verificaTemperatura(temp);

    verificaTemperatura(informaTemperatura());

    verificaTemperatura(informaTemperatura());

    return 0;
}

void verificaTemperatura(float temp){
    if(temp <= 15){
        printf("Aquecer!\n");
    }else if(temp > 15 && temp < 25){
        printf("Temperatura adequada!\n");
    }else{
        printf("Resfriar!\n");
    }
}

float informaTemperatura(){
    float temp;
    printf("Informe o valor da temperatura:");
    scanf("%f", &temp);

    return temp;
}

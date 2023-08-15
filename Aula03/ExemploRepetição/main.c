#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int temperatura;

int main(){
    setlocale(LC_ALL, "portuguese");

    int valor;

    for(int i=0; i<10; i++){
        printf("Tempo: %d segundos\n", i+1);
    }

    temperatura = 15;

    while(temperatura < 23){
        ligaArCondicionado();
    }

    printf("Informe um valor:");
    scanf("%d",&valor);

    for(int x=0; x < 10; x++){
        valor+=2;
        printf("%d\n", valor);
    }

    return 0;

}

void ligaArCondicionado(){
    printf("Temperatura: %d ºC\n", temperatura);

    temperatura++;
}

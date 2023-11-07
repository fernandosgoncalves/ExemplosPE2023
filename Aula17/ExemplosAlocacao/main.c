#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    float temp;
    char modelo[20];
} SENSOR;

int main(){
    int *p;
    float *notas;
    double *temp;
    SENSOR *lista;

    temp = calloc(10, sizeof(double));

    //p = malloc(10);
    p = malloc(4*sizeof(int));

    lista = calloc(4, sizeof(SENSOR));

    p[0] = 125;
    p[1] = 12;

    p = realloc(p, 6*sizeof(int));

    printf("%d - %d\n", p[0], p[1]);

    temp[0] = 22.5;
    temp[1] = 23.8;
    temp[2] = 19.4;

    printf("%.2lf - %.2lf - %.2lf\n", temp[0], temp[1], temp[2]);

    SENSOR aux;

    aux.codigo = 10;
    strcpy(aux.modelo, "DHT22");
    aux.temp = 15.5;

    lista[0] = aux;

    lista[1].codigo = 25;
    lista[1].temp = 12.8;
    strcpy(lista[1].modelo, "Sonar");

    /*for(int i=0; i<2; i++){
        printf("Codigo: %d - Modelo: %s - Temp: %.2f\n", lista[i].codigo,
               lista[i].modelo, lista[i].temp);
    }*/

    printf("Codigo: %d - Modelo: %s - Temp: %.2f\n", lista->codigo,
               lista->modelo, lista->temp);
    lista++;
    printf("Codigo: %d - Modelo: %s - Temp: %.2f\n", lista->codigo,
               lista->modelo, lista->temp);
    lista--;

    return 0;
}

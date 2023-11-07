#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char modelo[30];
    float valor;
} Sensor;

int main(){
    FILE *fp = fopen("embarcados.txt", "a+");
    FILE *sensores = fopen("sensor.bin", "wb");
    int x = 35;
    float nota = 4.53;

    Sensor *s = malloc(sizeof(Sensor));

    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    putc('x', fp);

    fprintf(fp, "Fernando\n");
    fprintf(fp, "%d %.2f", x, nota);

    s->codigo = 15;
    strcpy(s->modelo, "DHT22");
    s->valor = 22.5;

    fwrite(s, sizeof(Sensor), 1, sensores);

    fclose(fp);
    fclose(sensores);

    //------------------------------
    fp = fopen("embarcados.txt", "r+");
    sensores = fopen("sensor.bin", "rb");

    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    char auxC = getc(fp);
    char texto[15];

    fscanf(fp, "%s", texto);

    int auxInt;

    fscanf(fp, "%d", &auxInt);

    float auxFloat;

    getc(fp);

    fscanf(fp, "%f", &auxFloat);

    printf("Char: %c\n", auxC);
    printf("String: %s\n", texto);
    printf("Inteiro: %d\n", auxInt);
    printf("Float: %.2f\n", auxFloat);

    Sensor auxS;

    fread(&auxS, sizeof(Sensor), 1, sensores);

    printf("Codigo: %d\n", auxS.codigo);
    printf("Modelo: %s\n", auxS.modelo);
    printf("Valor: %.2f\n", auxS.valor);

    fclose(fp);

    return 0;
}

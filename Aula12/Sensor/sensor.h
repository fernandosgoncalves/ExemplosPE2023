#ifndef SENSOR_H_INCLUDED
#define SENSOR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char descricao[20];
    int status;
    char data[12];
    double valor;
} Sensor;

int menu();
void executaOpcao(int opcao);
Sensor cadastraSensor();
void mostraDados(Sensor sensor);
Sensor mudaStatus(Sensor sensor);

#endif // SENSOR_H_INCLUDED

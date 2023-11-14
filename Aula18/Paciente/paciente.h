#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idPaciente;
    int freqCardiaca;
    int pressaoMax;
    int pressaoMin;
    float saturacao;
    float temp;
    char dataHora[30];
} Monitor;

typedef struct {
    char nome[100];
    int idade;
    char genero;
    float peso;
} Paciente;

int mostraMenu();
void cadastraPaciente(Paciente *lista, int *tPacientes, int edit);
void listaPacientes(Paciente *lista, int tPacientes, Monitor *listaLeituras, int tLeituras);
void gravarParametros(int tp, int cp, int tl, int cl);
void gravarArquivo(Paciente *lista, int tPacientes, Monitor *lm, int tLeituras);
void cadastraLeitura(Monitor *lista, int p, int codPaciente);

void excluirPaciente(Paciente *lista, int *tPacientes);




#endif // PACIENTE_H_INCLUDED

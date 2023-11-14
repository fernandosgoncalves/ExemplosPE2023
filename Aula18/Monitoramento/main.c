#include <stdio.h>
#include <stdlib.h>
#include "../Paciente/paciente.h"

int main(){
    Paciente *pacientes;
    pacientes = calloc(2,sizeof(Paciente));

    Monitor *leituras;
    leituras = calloc(50, sizeof(Monitor));

    int totalPacientes = 0, capacidadePacientes = 2;
    int totalLeituras = 0, capacidadeLeituras = 50;
    int *cp, *tp;
    int opcao = 0, aux;

    cp = &capacidadePacientes;
    tp = &totalPacientes;

    //Antes de executar o programa criar os arquivos vazios na pasta do projeto
    //O pâmetro r+ abre o arquivo para leitura e escrita no inicio do documento
    FILE *fp = fopen("param.txt", "r+");

    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    fscanf(fp, "%d", &totalPacientes);
    fscanf(fp, "%d", &capacidadePacientes);
    fscanf(fp, "%d", &totalLeituras);
    fscanf(fp, "%d", &capacidadeLeituras);

    //printf("%d %d\n", totalPacientes, capacidadePacientes);

    fclose(fp);

    if(capacidadePacientes > 2)
        pacientes = realloc(pacientes, (capacidadePacientes*sizeof(Paciente)));

    fp = fopen("pacientes.txt", "r+");

    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    fread(pacientes, sizeof(Paciente), totalPacientes, fp);

    fclose(fp);

    printf("Pacientes carregados com sucesso!");

    fp = fopen("leituras.txt", "r+");

    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    fread(leituras, sizeof(Monitor), totalLeituras, fp);

    fclose(fp);

    printf("Leituras carregadas com sucesso!");

    system("pause");
    while(opcao != 7){
        system("cls");
        opcao = mostraMenu();

        switch(opcao){
            case 1:
                if(totalPacientes == capacidadePacientes){
                    capacidadePacientes += 2;
                    pacientes = realloc(pacientes, (capacidadePacientes*sizeof(Paciente)));
                }
                cadastraPaciente(pacientes, tp, 0);
            break;
            case 2:
                printf("Informe a posicao que deseja editar (1 - %d): ", totalPacientes);
                scanf("%d", &aux);
                aux--;
                cadastraPaciente(pacientes, &aux, 1);
            break;

            case 4:
                listaPacientes(pacientes, totalPacientes, leituras, totalLeituras);
            break;
            case 5:
                gravarParametros(totalPacientes, capacidadePacientes, totalLeituras, capacidadeLeituras);
                gravarArquivo(pacientes, totalPacientes, leituras, totalLeituras);
            break;
            case 6:
                printf("Informe o paciente que deseja cadastrar:");
                scanf("%d", &aux);
                aux--;
                cadastraLeitura(leituras, totalLeituras, aux);
                totalLeituras++;
            break;
        }
        system("pause");

    }
    return 0;
}

#include "paciente.h"

int mostraMenu(){
    int opcao;

    printf("--Menu--\n");
    printf("1 - Cadastrar Paciente\n");
    printf("2 - Editar Paciente\n");
    //printf("3 - Excluir Paciente\n");
    printf("4 - Listar Paciente\n");
    printf("5 - Gravar Arquivo\n");
    printf("6 - Cadastrar Leitura\n");
    printf("7 - Sair\n");
    printf("Informe uma opcao:");
    scanf("%d", &opcao);

    return opcao;
}

void cadastraPaciente(Paciente *lista, int *tPacientes, int edit){
    printf("Informe o nome:");
    fflush(stdin);
    scanf("%[^\n]s", lista[*tPacientes].nome);

    printf("Informe a idade:");
    scanf("%d", &lista[*tPacientes].idade);

    printf("Informe o genero:");
    fflush(stdin);
    scanf("%c", &lista[*tPacientes].genero);

    printf("Informe o peso:");
    scanf("%f", &lista[*tPacientes].peso);

    if(edit == 0)
        *tPacientes = *tPacientes +1;

    printf("Paciente Cadastrado com Sucesso!\n");
}

void listaPacientes(Paciente *lista, int tPacientes, Monitor *listaLeituras, int tLeituras){
    for(int i=0; i< tPacientes; i++){
        printf("P%d - %s - %d - %c - %.2f\n", (i+1), lista[i].nome, lista[i].idade, lista[i].genero, lista[i].peso);
        for(int x=0; x< tLeituras; x++){
            if(listaLeituras[x].idPaciente == i)
                printf("Freq.: %d - %s\n", listaLeituras[x].freqCardiaca, listaLeituras[x].dataHora);
        }
    }
}

void gravarParametros(int tp, int cp, int tl, int cl){
    FILE *fp = fopen("param.txt", "r+");

    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    fprintf(fp, "%d\n", tp);
    fprintf(fp, "%d\n", cp);
    fprintf(fp, "%d\n", tl);
    fprintf(fp, "%d\n", cl);

    fclose(fp);

    printf("Parametros gravados com sucesso!\n");
}

void gravarArquivo(Paciente *lista, int tPacientes, Monitor *lm, int tLeituras){
    FILE *fp = fopen("pacientes.txt", "r+");

    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    fwrite(lista, sizeof(Paciente), tPacientes, fp);

    fclose(fp);

    fp = fopen("leituras.txt", "r+");

    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    fwrite(lm, sizeof(Monitor), tLeituras, fp);

    fclose(fp);
    printf("Dados gravados com sucesso!\n");
}

void cadastraLeitura(Monitor *lista, int p, int codPaciente){
    printf("Informe a Freq. Card.: ");
    scanf("%d", &lista[p].freqCardiaca);
    printf("Informe a Data e Hora: ");
    fflush(stdin);
    scanf("%[^\n]s", lista[p].dataHora);
    lista[p].idPaciente = codPaciente;
    printf("Dados salvos com sucesso!\n");
}

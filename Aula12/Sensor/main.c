#include "sensor.h"

int menu(){
    int opcao = 0;
    system("cls");
    printf("-- Menu --\n");
    printf("1 - Cadastra Sensor\n");
    printf("2 - Muda Status\n");
    printf("3 - Consulta Sensores\n");
    printf("4 - Sair\n");
    printf("Selecione uma opcao:\n");
    scanf("%d", &opcao);
    return opcao;
}

Sensor cadastraSensor(){
    int auxCod;
    double auxValor;
    char auxDesc[20], auxData[12];
    Sensor auxSensor;

    printf("Informe o codigo:");
    scanf("%d", &auxCod);
    printf("Informe a descricao:");
    fflush(stdin);
    scanf("%[^\n]s", &auxDesc);
    printf("Informe a data");
    fflush(stdin);
    scanf("%[^\n]s", &auxData);
    printf("Informe o valor:");
    scanf("%lf", &auxValor);

    auxSensor.codigo = auxCod;
    strcpy(auxSensor.descricao, auxDesc);
    auxSensor.status = 0;
    strcpy(auxSensor.data, auxData);
    auxSensor.valor = auxValor;

    return auxSensor;
}

void mostraDados(Sensor sensor){
    printf("%d\t%s\t%d\t%s\t%.2f\n", sensor.codigo, sensor.descricao, sensor.status,
           sensor.data, sensor.valor);
}

Sensor mudaStatus(Sensor sensor){
    sensor.status = !sensor.status;

    return sensor;
}

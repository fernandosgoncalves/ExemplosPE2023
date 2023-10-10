#include <stdio.h>
#include <stdlib.h>
#include "../Sensor/sensor.h"

int main(){
    int opcao = 0, auxPos = 0, aux;
    Sensor lista[5];

    while(opcao != 4){
        opcao = menu();

        switch(opcao){
            case 1:
                //Cadastra sensor
                if(auxPos < 5){
                    lista[auxPos] = cadastraSensor();
                    auxPos++;
                }else
                    printf("Lista cheia!\n");
            break;
            case 2:
                //Muda status
                printf("Informe o sensor que deseja alterar: ");
                scanf("%d", &aux);
                if(aux < auxPos)
                    lista[aux] = mudaStatus(lista[aux]);
            break;
            case 3:
                //Consulta sensores
                printf("Codigo\tDescricao\tStatus\tData\tValor\n");
                for(int i=0; i<5; i++){
                    if(i >= auxPos)
                        break;

                    mostraDados(lista[i]);
                }
                system("pause");
            break;
        }
    }

    return 0;
}

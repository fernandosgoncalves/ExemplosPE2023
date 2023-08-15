#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 20

int main(){
    setlocale(LC_ALL, "portuguese");

    int idade[TAM], valor, x = 0, vetor[10] = {1,2};

    //printf("%d, %d, %d, %d\n", vetor[0], vetor[1], vetor[2], vetor[3]);

    for(int i=0; i<TAM; i++){
        printf("Informe o valor %d:", i+1);
        scanf("%d", &idade[i]);
    }

    printf("Informe um valor:");
    scanf("%d",&valor);

    for(int i=0; i<TAM; i++){
        if(valor == idade[i]){
            printf("Valor encontrado na posição %d\n", i+1);
            x = 1;
            //break;
        }
    }

    if(x == 0){
        printf("Valor não encontrado\n");
    }

    return 0;
}

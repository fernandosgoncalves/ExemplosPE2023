#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int valor, valor2, v3, contador =0;

    printf("Informe um valor:");
    scanf("%d", &valor);

    valor2 = valor;

    for(valor; valor >= 0; valor--){
        printf("%d\n", valor);
    }

    while(valor2 > 0){
        valor2--;
        printf("%d\n", valor2);
    }

    printf("Informe um valor:");
    scanf("%d", &v3);

    while(v3 > 1){
        v3 /= 2;
        printf("%d\n", v3);
        contador++;
    }

    printf("Foram realizadas %d divisões\n", contador);


    return 0;
}

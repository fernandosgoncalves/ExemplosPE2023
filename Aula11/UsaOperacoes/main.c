#include "../Operacoes/operacoes.h"

int main(){
    float a,b;

    a = lerNumero();
    b = lerNumero();

    printf("%.2f\n", soma(a,b));
    printf("%.2f\n", multiplica(a,b));
    return 0;
}

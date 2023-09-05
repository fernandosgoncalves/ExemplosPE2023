#include <stdio.h>
#include <stdlib.h>

int fatorial(int x);

int main()
{
    int z = 10;
    printf("%d! = %d \n", z, fatorial(z));
    return 0;
}

int fatorial(int x){
    int resultado;
    if(x==1)
        return 1;
    else{
        resultado = fatorial(x-1) * x;
        return resultado;
    }
}

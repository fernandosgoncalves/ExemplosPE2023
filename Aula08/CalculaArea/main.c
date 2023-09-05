#include <stdio.h>
#include <stdlib.h>

int calculaArea(int c, int l, int a);

int main(){
    int c, l, a, area;

    printf("Informe o comprimento: ");
    scanf("%d", &c);

    printf("Informe a largura: ");
    scanf("%d", &l);

    printf("Informe a altura: ");
    scanf("%d", &a);

    area = calculaArea(c, l, a);

    printf("Area: %d\n", area);

    return 0;
}

int calculaArea(int c, int l, int a){
    return c*l*a;
}

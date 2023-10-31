#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    int *pa, *pb, *pc;

    pa = &a;
    pb = &b;
    pc = &c;

    printf("Informe o valor de A: ");
    scanf("%d", &a);

    printf("Informe o valor de B: ");
    scanf("%d", &b);

    soma(pa, pb, pc);

    printf("A soma de %d + %d = %d\n", a, b, c);
    return 0;
}

void soma(int *a, int *b, int *c){
    *c = *a + *b;
}

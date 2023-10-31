#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, *p, lista[5];
    char *p1;
    char s[80];
    int min, max;

    do{
        p1 = s;
        gets(s);
        while(*p1) printf("%d", *p1++);
    }while(strcmp(s, "done"));

    x = 10;
    p = &x;

    busca(lista, pMin, pMax);

    printf("%d\n", *p);

    printf("Minimo: %d\n", *pMin);
    printf("Maximo: %d\n", *pMax);
    return 0;
}


void busca (){

}

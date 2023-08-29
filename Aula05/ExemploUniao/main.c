#include <stdio.h>
#include <stdlib.h>

union u_type{
    int x;
    char c;
    double w;
};

int main(){
    union u_type teste;

    teste.x = 10;

    printf("%d\n", teste);

    teste.c = 'A';

    printf("%c\n", teste);

    teste.w = 8.45;

    printf("%.2f\n", teste);
    return 0;
}

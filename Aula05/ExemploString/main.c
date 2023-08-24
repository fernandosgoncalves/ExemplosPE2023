#include <stdio.h>
#include <stdlib.h>

int main(){
    char texto[30], texto2[30];
    char c1[10] = {"Pedro"}, c2[10] = {"Maria"};

    printf("Informe um texto: ");
    scanf("%[^\n]s", &texto);

    printf("Informe um texto: ");
    fflush(stdin);
    gets(texto2);

    printf("%s \n %s", texto, texto2);

    strcpy(texto2, "Fernando");

    printf("\n%s\n", texto2);

    printf("%s = %s : %d", c1, c2, strcmp(c1, c2));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    typedef struct {
        char nome[20];
        char contato[15];
        int nota[3];
    } Aluno;

    Aluno aluno1, aluno2 = {"Thobias", "123456", {7,8,7}}, aluno3, aluno4;

    strcpy(aluno1.nome, "Thais");
    strcpy(aluno1.contato, "12345678");
    aluno1.nota[0] = 8;
    aluno1.nota[1] = 9;
    aluno1.nota[2] = 7;

    printf("Nome: %s\n", aluno1.nome);
    printf("Contato: %s\n", aluno1.contato);
    printf("N1: %d N2: %d N3: %d\n", aluno1.nota[0], aluno1.nota[1], aluno1.nota[2]);
    printf("Nome: %s\n", aluno2.nome);
    printf("Contato: %s\n", aluno2.contato);



    return 0;
}

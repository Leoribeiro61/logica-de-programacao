#include <stdio.h>

int main(){
    char nome[50], sobrenome[50], nomeCompleto[50];

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite o sobrenome: \n");
    scanf("%s", &sobrenome);

    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("Nome completo: %s\n", nomeCompleto);
}
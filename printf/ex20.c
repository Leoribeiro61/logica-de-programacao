/*
ENTRADA:
PROCESSAMENTO:
SAIDA:
*/

#include <stdio.h>

int main(){
    int A = 0;
    int B = 0;
    int soma = 0;
    int resultado = 0;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &A);

    printf("Digite outro valor inteiro: \n");
    scanf("%d", &B);

    soma = A + B;
    resultado = soma * soma;

    printf("O resultado da soma dos quadrados e: %d\n", resultado);

}
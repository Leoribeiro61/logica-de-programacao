/*
ENTRADA:
PROCESSAMENTO:
SAIDA:
*/


#include <stdio.h>

int main(){
    int A = 0;
    int B = 0;
    int resultado = 0;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &A);

    printf("Digite outro valor inteiro: \n");
    scanf("%d", &B);

    resultado = (A * A) + (B * B);

    printf("O resultado da soma de cada valor lido e: %d\n", resultado);

}
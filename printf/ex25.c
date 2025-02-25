/*
ENTRADA:
PROCESSAMENTO:
SAIDA:
*/

#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int resultado = 0;
    int resto = 0;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &a);

    printf("Digite um numero inteiro: \n");
    scanf("%d", &b);

    resultado = a / b;
    resto = a % b;

    printf("O resultado e: %d\n", resultado);
    printf("O resto da divisao e: %d\n", resto);

}
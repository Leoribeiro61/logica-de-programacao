/*
ENTRADA: um numero inteiro
PROCESSAMENTO: calculo para descobrir quadrado e cubo
SAIDA:
*/

#include <stdio.h>

int main(){
    int num = 0; 
    int quadrado = 0;
    int cubo = 0;

    printf("Digite um numero inteiro:");
    scanf("%d", &num);

    quadrado = num * num;
    cubo = num * num * num;

    printf("O resultado ao quadrado e: %d\n", quadrado);
    printf("O resultado ao cubo e: %d", cubo);

}
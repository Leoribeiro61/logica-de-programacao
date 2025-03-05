/*
66. Escreva um algoritmo que leia dois números inteiros e determine qual é o menor 
e qual é o maior também

ENTRADA: dois numeros
PROCESSAMENTO: verificar se é maior, menor ou igual
SAIDA: qual maior ou menor numero
*/

#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O maior numero e: %d\n", num1);
        printf("O menor numero e: %d\n", num2);
    } else if (num2 > num1) {
        printf("O maior numero e: %d\n", num2);
        printf("O menor numero e: %d\n", num1);
    } else {
        printf("Os dois numeros sao iguais.\n");
    }
}

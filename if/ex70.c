/*
70. Crie um algoritmo que retorne verdadeiro quando um número fornecido for par. 

ENTRADA: um numero
PROCESSAMENTO: verificar se e impar ou par
SAIDA: mensagem dizendo se e impar ou par
*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d e PAR.\n", numero);
    } else {
        printf("O numero %d e IMPAR.\n", numero);
    }
}

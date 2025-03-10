/*
83. Crie um algoritmo para uma calculadora utilizando a instrução escolha-caso para 
determinar a operação que deve ser executada, conforme o usuário escolher no 
menu de opções. Conforme a opção escolhida pelo usuário, uma operação 
diferente da calculadora deve ser executada.

ENTRADA: 
PROCESSAMENTO: 
SAIDA: 
*/

#include <stdio.h>

int main(){
    char operacao;
    int a = 0;
    int b = 0;
    int resultado = 0;

    printf("Digite um valor para 'A': \n");
    scanf("%d", &a);

    printf("Digite um valor para 'B': \n");
    scanf("%d", &b);

    printf("Digite a operacao desejada ('S' - soma, 'X' - subtracao, 'M' - multiplicacao, 'D' - divisao):\n");
    scanf("%s", &operacao);

    switch (operacao){
        case 'S':
        case 's':
            resultado = a + b;
            printf("A soma dos valores e: %d\n", resultado);
            break;
        case 'X':
        case 'x':
            resultado = a - b;
            printf("A subtracao dos valores e: %d\n", resultado);
            break;
        case 'M':
        case 'm':
            resultado = a * b;
            printf("A multiplicacao dos valores e: %d\n", resultado);
            break;
        case 'D':
        case 'd':
            resultado = a / b;
            printf("A divisao dos valores e: %d\n", resultado);
            break;
        default:
            printf("Operacao invalida!\n");
            break;
    }
}
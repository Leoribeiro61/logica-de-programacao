/*
80. Construa um algoritmo que leia um número inteiro de 1 a 7 e informe o dia da
semana correspondente, sendo domingo o dia de número 1. Se o número não
corresponder a um dia da semana, mostre uma mensagem de erro.

ENTRADA: um numero inteiro 
PROCESSAMENTO: verificar qual o dia da semana de acordo com o numero digitado
SAIDA: dia da semana
*/

#include <stdio.h>

int main(){
    int dia = 0;

    printf("Digite um numero inteiro de 1 a 7 de acordo com os dias da semana, considere que o primeiro dia seja domingo: \n");
    scanf("%d", &dia);

    switch (dia){
        case 1:
            printf("Domingo!\n");
            break; 
        case 2:
            printf("Segunda!\n");
            break; 
        case 3:
            printf("Terca!\n");
            break; 
        case 4:
            printf("Quarta!\n");
            break; 
        case 5:
            printf("Quinta!\n");
            break; 
        case 6:
            printf("Sexta!\n");
            break; 
        case 7:
            printf("Sabado!\n");
            break; 
        default:
            printf("Entrada invalida!!");
            break;
    }
}
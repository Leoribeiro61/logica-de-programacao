/*
76. Faça um algoritmo que receba uma data no formato DDMMAAAA e escreva qual 
a estação do ano correspondente (Primavera, Verão, Outono, Inverno). 

ENTRADA: data no formato DDMMAA
PROCESSAMENTO: verificar a estação do ano de acordo com a data informada
SAIDA: estação do ano
*/

#include <stdio.h>

int main(){
    int dia = 0;
    int mes = 0;
    int ano = 0;

    printf("Digite a data no formato DDMMAA: ");
    scanf("%2d%2d%4d", &dia, &mes, &ano);

    switch (mes){
        case 12: 
        case 1: 
        case 2:
            printf("Verao!\n");
            break;

        case 3: 
        case 4:
        case 5:
            printf("Outono!\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Inverno!\n");
            break;
        case 9: 
        case 10:
        case 11: 
            printf("Primavera!\n");
            break;
        default:
            printf("Mês invalido!\n"); 
    }
    
}
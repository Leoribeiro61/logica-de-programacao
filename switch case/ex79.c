/*
79.Faça um algoritmo que leia a primeira letra do estado civil de uma pessoa e 
mostre uma mensagem com a sua descrição (Solteiro, Casado, Viúvo, 
Divorciado, Desquitado). Mostre uma mensagem de erro, se necessário. 

ENTRADA: ler as inicias do estado civil
PROCESSAMENTO: verificar atraves da inicial qual estado civil da pessoa
SAIDA: estado civil da pessoa
*/

#include <stdio.h>

int main(){
    char estadoCivil;

    printf("Digite a primeira letra do seu estado civil (S - solteiro, C - casado, V - viuvo, D - divorciado, X - desquitado: \n):");
    scanf("%s", &estadoCivil);

    switch (estadoCivil) {
        case 'S':
        case 's':
            printf("Solteiro!\n");
            break;
        case 'C':
        case 'c':
            printf("Casado!\n");
            break;
        case 'V':
        case 'v':
            printf("Viuvo!\n");
            break;
        case 'D':
        case 'd':
            printf("Divorciado!\n");
            break;
        case 'X':
        case 'x':
            printf("Desquitado!\n");
            break;
        default:
            printf("Entrada invalida!\n");
    }
}
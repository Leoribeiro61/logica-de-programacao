/*
51. Faça um algoritmo que leia dois números e mostre qual o maior dos dois . 

ENTRADA: 2 numeros
PROCESSAMENTO: verificar qual o maior numero
SAIDA: maior numero
*/

#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;

    printf("Digite um valor para 'A': \n");
    scanf("%d", &a);

    printf("Digite um valor para 'B': \n");
    scanf("%d", &b);

    if(a > b){
        printf("O numero %d e maior", a);
    } else {
        printf("O numero %d e maior ", b);

    }

}
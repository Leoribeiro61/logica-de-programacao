/*
59. Faça um algoritmo que leia um número inteiro e mostre uma mensagem 
indicando se este número é par ou ímpar e se é positivo ou negativo.

ENTRADA: um numero inteiro 
PROCESSAMENTO: fazer a verificação para saber se o numero e par ou impar, positivo ou negativo
SAIDA: o numero par ou impar, positivo ou negativo
*/

#include <stdio.h>

int main(){
    int num = 0;

    printf("Digite um numero inteiro positivo ou negativo: \n");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O numero e par!\n");
    } else{
        printf("O numero e impar!\n");
    }

    if(num >= 0){
        printf("O numero e positivo!\n");
    } else {
        printf("O numero e negativo!\n");
    }

}
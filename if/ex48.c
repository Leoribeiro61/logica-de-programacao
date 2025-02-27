/*
48. Faça um algoritmo que leia 3 números inteiros distintos e escreva o menor deles.

ENTRADA:  3 numeros
PROCESSAMENTO: mostrar o menor numero digitado
SAIDA: menor numero digitado
*/

#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Digite um valor para 'A': \n");
    scanf("%d", &a);

    printf("Digite um valor para 'B': \n");
    scanf("%d", &b);

    printf("Digite um valor para 'C': \n");
    scanf("%d", &c);

    if(a < b && a < c){
        printf("O menor numero e: %d", a);
    } else if (b < a && b < c){
        printf("O menor numero e: %d", b);
    } else{
        printf("O menor numero e: %d", c);
    }
}
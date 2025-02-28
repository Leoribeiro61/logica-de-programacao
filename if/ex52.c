/*
52. Faça um algoritmo que leia dois números e indique se são iguais ou se são 
diferentes. Mostre o maior e o menor (nesta sequência).

ENTRADA: 2 numeros
PROCESSAMENTO: verificar se sao diferentes e mostrar o maior e o menor
SAIDA: maior e menor numero
*/

#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;

    printf("DIgite um valor para 'A': \n");
    scanf("%d", &a);

    printf("DIgite um valor para 'B': \n");
    scanf("%d", &b);

    if(a == b){
        printf("Os numeros so iguais!\n");
    } else {
        printf("Os numeros sao diferentes!\n");
    }

    if(a > b){
        printf("Numero maior para o menor: %d %d", a, b);
    } else {
        printf("Numero maior para o menor: %d %d", b, a);
    }
}
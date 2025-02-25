/*
ENTRADA: dois valores
PROCESSAMENTO: verificar qual o maior
SAIDA: exibir o numero maior
*/

#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;

    printf("Digite um numero: \n");
    scanf("%d", &a);

    printf("Digite outro numero: \n");
    scanf("%d", &b);

    if(a > b){
        printf("O numero %d e maior!", a);
    } else {
        printf("O numero %d e maior!", b);
    }

}
/*
ENTRADA:
PROCESSAMENTO:
SAIDA:
*/

#include <stdio.h>

int main(){
    int N = 0;

    printf("Digite um numero: \n");
    scanf("%d", &N);

    if(N <= 10){
        printf("F1!");
    } else if(N > 10 && N <= 100 ){
        printf("F2!");
    } else {
        printf("F3!");
    }


}
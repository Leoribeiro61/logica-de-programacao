/*
ENTRADA:
PROCESSAMENTO:
SAIDA:
*/

#include <stdio.h>

int main(){
    float val1 = 0;
    float val2 = 0;
    float media = 0;

    printf("Digite um numero: \n");
    scanf("%f", &val1);

    printf("Digite outro numero: \n");
    scanf("%f", &val2);

    media = (val1 + val2) / 2;

    printf("O valor da media entre os dois valores e: %.1f\n", media);

}
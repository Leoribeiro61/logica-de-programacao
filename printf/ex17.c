/*
ENTRADA: 4 numeros 
PROCESSAMENTO: calculo entre 
SAIDA:
*/

#include <stdio.h>

int main(){
    float A = 0;
    float B = 0;
    float C = 0;
    float D = 0;
    float resultado = 0;

    printf("Digite um numero para 'A': \n");
    scanf("%f", &A);

    printf("Digite um numero para 'B': \n");
    scanf("%f", &B);

    printf("Digite um numero para 'C': \n");
    scanf("%f", &C);

    printf("Digite um numero para 'D': \n");
    scanf("%f", &D);

    resultado = (A + B) * (A + C) * (A + D) * (B + C) * (B + D) * (C + D);

    printf("O Resultado e: %f\n", resultado);

}
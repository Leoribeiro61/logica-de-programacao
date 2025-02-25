/*
38. Faça um algoritmo que leia os valores A, B e C. Mostre uma mensagem que 
informe se a soma de A com B é menor, maior ou igual a C. 


ENTRADA: valores de a, b e c
PROCESSAMENTO: fazer a comparação entre os numeros
SAIDA: informar se a soma e maior, menor ou igual
*/

#include <stdio.h>

int main(){
    float A = 0;
    float B = 0;
    float C = 0;
    float resultado = 0;

    printf("Digite um valor para A: \n");
    scanf("%f", &A);

    printf("Digite um valor para B: \n");
    scanf("%f", &B);

    printf("Digite um valor para C: \n");
    scanf("%f", &C);

    resultado = A + B;

    if(resultado > C){
        printf("A soma de A com B e maior que C \n");
    } else if(resultado < C){
        printf("A soma de A com B e menor que C \n");
    } else {
        printf("A soma de A com B e igual a C \n");
    }








}

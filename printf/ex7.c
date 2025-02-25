/*
ENTRADA: temperatura em fahrenheit
PROCESSAMENTO: fazer o calculo de conversao 
SAIDA: temperatura em celcius
*/

#include <stdio.h>

int main(){
    float C = 0;
    float F = 0;

    printf("Digite a temperatura em fahrenheit: \n");
    scanf("%f", &F);

    C = (F - 32) * 5 / 9;

    printf("A temperatura em graus celcius depois da conversao e: %.2f\n", C);


}
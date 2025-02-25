/*
ENTRADA: Temperatura em graus celcius 
PROCESSAMENTO: fazer o calculo de conversão
SAIDA: temperatura em fahrenheit
*/

#include <stdio.h>

int main(){
    float C = 0;
    float F = 0;

    printf("Digite a temperatura em graus celcius: \n");
    scanf("%f", &C);

    F = (9 * C + 160) / 5;

    printf("A temperatura em fahrenheit depois da conversao e: %.2f \n", F);

}
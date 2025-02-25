/*
ENTRADA:
PROCESSAMENTO:
SAIDA:
*/

#include <stdio.h>

#define PI 3.14159

int main(){
    float volume;
    float raio;
    float altura;

    printf("Digite o valor do raio da lata de oleo: \n");
    scanf("%f", &raio);

    printf("Digite o valor da altura da lata de oleo: \n");
    scanf("%f", &altura);

    volume = PI * (raio * raio) * altura;

    printf("O volume da lata e: %.2f", volume);
}
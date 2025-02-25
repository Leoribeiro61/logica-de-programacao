/*
ENTRADA: comprimento, altura e largura da caixa
PROCESSAMENTO: calculo para descobrir o volume da caixa
SAIDA: volume da caixa
*/

#include <stdio.h>

int main(){
    float comprimento = 0;
    float largura = 0;
    float altura = 0;
    float volume = 0;

    printf("Digite o valor do comprimento da caixa: \n");
    scanf("%f", &comprimento);
    
    printf("Digite o valor da altura da caixa: \n");
    scanf("%f", &altura);

    printf("Digite o valor da largura da caixa: \n");
    scanf("%f", &largura);

    volume = comprimento * largura * altura;

    printf("O volume da caixa retangular e: %.2f\n", volume);
}
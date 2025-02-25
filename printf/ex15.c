/*
ENTRADA: tempo gasto e velocidade media  
PROCESSAMENTO: calculo para descobrir quantidade de litros
SAIDA: litros usados na viagem
*/

#include <stdio.h>

int main(){
    float tempoViagem = 0;
    float velocidadeMedia = 0;
    float distancia = 0;
    float litrosUsados = 0;

    printf("Digite o tempo que foi gasto na viagem: \n");
    scanf("%f", &tempoViagem);

    printf("Digite a velocidade media durante a viagem: \n");
    scanf("%f", &velocidadeMedia);

    distancia = tempoViagem * velocidadeMedia;

    litrosUsados = distancia / 12;


    printf("Valocidade media: %.2f km/h.\n", velocidadeMedia);
    printf("tempo gasto de viagem: %.2f horas.\n", tempoViagem);
    printf("Distancia percorrida: %.2f km.\n", distancia);
    printf("Quantidade de litros utilizados na viagem: %.2f.\n", litrosUsados);

}
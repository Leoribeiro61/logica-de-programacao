/*
ENTRADA:
PROCESSAMENTO:
SAIDA:
*/

#include <stdio.h>

int main(){
    float velocidade = 0;
    float resultado = 0;

    printf("Digite a velocidade do veiculo em km/h: \n");
    scanf("%f", &velocidade);

    resultado = velocidade / 3.6; 

    printf("A velocidade em km/h convertido em m/s e: %.2f", resultado);

}
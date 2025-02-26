/*
39. Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais. 
Considerando que alguém está pagando uma compra, escreva um algoritmo que 
mostre o número mínimo de notas que o caixa deve fornecer como troco. Mostre 
também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota 
do troco. Suponha que o sistema monetário não utilize moedas.

ENTRADA: valor da compra e o valor pago 
PROCESSAMENTO: calcular a quantidade de notas 
SAIDA: quantidades de notas para o troco 
*/

#include <stdio.h>

int main(){
    float valorCompra = 0;
    float troco = 0;
    float valorPago = 0;
    int notas100 = 0;
    int notas10 = 0;
    int notas1 = 0;

    printf("Digite o valor da compra: \n");
    scanf("%f", &valorCompra);

    printf("Digite o valor pago: \n");
    scanf("%f", &valorPago); 

    troco = valorPago - valorCompra;

    printf("\nValor da compra: R$ %.2f\n", valorCompra);
    printf("Valor pago: R$ %.2f\n", valorPago);
    printf("Troco: R$ %.2f\n", troco);

    if (troco >= 100) {
        notas100 = troco / 100;
        troco = troco - (notas100 * 100); 
    }

    else if (troco >= 10) {
        notas10 = troco / 10;
        troco = troco - (notas10 * 10); 
    }

    else if (troco >= 1) {
        notas1 = troco / 1;
        troco = troco - (notas1 * 1); 
    }

    printf("\nQuantidade de notas para o troco:\n");
    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 1: %d\n", notas1);
}

/*if(valorTroco < 0){
    printf("Valor pago é menor que o valor da compra")
}*/
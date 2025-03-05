/*
62. Um banco concederá um crédito especial aos seus clientes, variável com o saldo 
médio no último ano. Faça um algoritmo que leia o saldo médio de um cliente e 
calcule o valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem 
informando o saldo médio e o valor do crédito. 
Saldo médio Percentual
de 0 a 200 nenhum crédito 
de 201 a 400 20% do valor do saldo médio 
de 401 a 600 30% do valor do saldo médio 
acima de 601 40% do valor do saldo médio 

ENTRADA: saldo medio do cliente
PROCESSAMENTO: verificar a quantidade de credito disponivel
SAIDA: o valor o credito
*/

#include <stdio.h>

int main() {
    float saldoMedio = 0; 
    float credito = 0;

    printf("Digite o saldo medio do cliente: ");
    scanf("%f", &saldoMedio);

    if (saldoMedio >= 0 && saldoMedio <= 200) {
        credito = 0;
        printf("Saldo medio: R$ %.2f\n", saldoMedio);
        printf("Valor do credito: R$ 0.00\n");
    } 
    else if (saldoMedio >= 201 && saldoMedio <= 400) {
        credito = saldoMedio * 0.20;
        printf("Saldo medio: R$ %.2f\n", saldoMedio);
        printf("Valor do credito: R$ %.2f\n", credito);
    } 
    else if (saldoMedio >= 401 && saldoMedio <= 600) {
        credito = saldoMedio * 0.30;
        printf("Saldo medio: R$ %.2f\n", saldoMedio);
        printf("Valor do credito: R$ %.2f\n", credito);
    } 
    else if (saldoMedio > 600) {
        credito = saldoMedio * 0.40;
        printf("Saldo medio: R$ %.2f\n", saldoMedio);
        printf("Valor do credito: R$ %.2f\n", credito);
    } else {
        printf("Entrada invalida!!"); 
    }

}

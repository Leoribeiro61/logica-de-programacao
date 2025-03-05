/*
63. Um vendedor necessita de um algoritmo que calcule o preço total devido por um 
cliente. O algoritmo deve receber o código de um produto e a quantidade 
comprada e calcular o preço total, usando a tabela abaixo: 
Código do produto Preço unitário
 1001 5,32 
 1324 6,45 
 6548 2,37 
 0987 5,32 
 7623 6,45

ENTRADA: codigo e a quantidade comprada pelo cliente
PROCESSAMENTO: calcular o preco total do produto
SAIDA: preço total do produto
*/

#include <stdio.h>

int main() {
    int codigoProduto = 0;
    int quantidade = 0;
    float precoUnitario = 0;
    float precoTotal = 0;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigoProduto);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    if (codigoProduto == 1001) {
        precoUnitario = 5.32;
    } 
    else if (codigoProduto == 1324) {
        precoUnitario = 6.45;
    } 
    else if (codigoProduto == 6548) {
        precoUnitario = 2.37;
    } 
    else if (codigoProduto == 987) {
        precoUnitario = 5.32;
    } 
    else if (codigoProduto == 7623) {
        precoUnitario = 6.45;
    } 
    else {
        printf("Codigo invalido!\n");
    }

    precoTotal = precoUnitario * quantidade;

    printf("Preco unitario: R$ %.2f\n", precoUnitario);
    printf("Quantidade: %d\n", quantidade);
    printf("Preco total: R$ %.2f\n", precoTotal);

}

/*
64. Um vendedor precisa de um algoritmo que calcule o preço total devido por um 
cliente. O algoritmo deve receber o código de um produto e a quantidade 
comprada e calcular o preço total, usando a tabela abaixo. Mostre uma 
mensagem no caso de código inválido. 
 Código Preço Unitário 
 'ABCD' R$ 5,30 
 'XYPK' R$ 6,00 
 'KLMP' R$ 3,20 
 'QRST' R$ 2,50 

ENTRADA: o codigo e a quantidade do produto 
PROCESSAMENTO: calcular o valor total
SAIDA: valor total
*/

#include <stdio.h>

int main() {
    int quantidade;
    float precoUnitario = 0; 
    float precoTotal = 0;
    char codigoProduto[5];

    printf("Digite o codigo do produto: ");
    scanf("%s", codigoProduto);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    if (codigoProduto[0] == 'A' && codigoProduto[1] == 'B' && codigoProduto[2] == 'C' && codigoProduto[3] == 'D' && codigoProduto[4] == '\0') {
        precoUnitario = 5.30;
    } 
    else if (codigoProduto[0] == 'X' && codigoProduto[1] == 'Y' && codigoProduto[2] == 'P' && codigoProduto[3] == 'K' && codigoProduto[4] == '\0') {
        precoUnitario = 6.00;
    } 
    else if (codigoProduto[0] == 'K' && codigoProduto[1] == 'L' && codigoProduto[2] == 'M' && codigoProduto[3] == 'P' && codigoProduto[4] == '\0') {
        precoUnitario = 3.20;
    } 
    else if (codigoProduto[0] == 'Q' && codigoProduto[1] == 'R' && codigoProduto[2] == 'S' && codigoProduto[3] == 'T' && codigoProduto[4] == '\0') {
        precoUnitario = 2.50;
    } 
    else {
        printf("Codigo de produto invalido!\n");
    }
    precoTotal = precoUnitario * quantidade;

    printf("Preco unitario: R$ %.2f\n", precoUnitario);
    printf("Quantidade: %d\n", quantidade);
    printf("Preco total: R$ %.2f\n", precoTotal);

}


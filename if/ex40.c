/*
40. Uma empresa produz três tipos de peças mecânicas: parafusos, porcas e 
arruelas. Têm-se os preços unitários de cada tipo de peça e sabe-se que sobre 
estes preços incidem descontos de 10% para porcas, 20% para parafusos e 30% 
para arruelas. Escreva um algoritmo que calcule o valor total da compra de um 
cliente. Deve ser mostrado o nome do cliente. O número de cada tipo de peça 
que o mesmo comprou, o total de desconto e o total a pagar pela compra.

ENTRADA: nome do cliente, quantidade de parafusos, porcas e arruelas, preço
PROCESSAMENTO: fazer o calculo para saber a quantidade de desconto de acordo com a quantidade comprada
SAIDA: quantidade de itens comprados, o valor de desconto e o valor total da compra 
*/
#include <stdio.h>

int main(){
    char nome[100];
    int qtdParafuso = 0;
    int qtdPorcas = 0;
    int qtdArruelas = 0;
    float totalParafuso = 0;
    float totalPorcas = 0;
    float totalArruelas = 0;
    float descontoTotal = 0;
    float totalCompra = 0;
    float precoParafuso = 0;
    float precoPorcas = 0;
    float precoArruelas = 0;
    float descontoParafuso = 0.20;
    float descontoPorcas = 0.10;
    float descontoArruelas = 0.30;

    printf("Digite o nome: \n");
    scanf("%s", &nome);

    printf("Digite a quantidade de parafusos que o cliente comprou: \n");
    scanf("%d", &qtdParafuso);

    printf("Digite a quantidade de porcas que o cliente comprou: \n");
    scanf("%d", &qtdPorcas);

    printf("Digite a quantidade de arruelas que o cliente comprou: \n");
    scanf("%d", &qtdArruelas);

    printf("Digite o preco unitario do parafuso: \n");
    scanf("%f", &precoParafuso);

    printf("Digite o preco unitario da porca: \n");
    scanf("%f", &precoPorcas);

    printf("Digite o preco unitario da arruela: \n");
    scanf("%f", &precoArruelas);

    if (qtdParafuso > 0) {
        totalParafuso = qtdParafuso * precoParafuso * (1 - descontoParafuso);
        descontoTotal += qtdParafuso * precoParafuso * descontoParafuso; 
    }

    if (qtdPorcas > 0) {
        totalPorcas = qtdPorcas * precoPorcas * (1 - descontoPorcas);
        descontoTotal += qtdPorcas * precoPorcas * descontoPorcas;
    }

    if (qtdArruelas > 0) {
        totalArruelas = qtdArruelas * precoArruelas * (1 - descontoArruelas);
        descontoTotal += qtdArruelas * precoArruelas * descontoArruelas;
    }

    totalCompra = totalParafuso + totalPorcas + totalArruelas;

    printf("Cliente: %s\n", nome );
    printf("Quantidade de parafusos: %d\n", qtdParafuso);
    printf("Quantidade de porcas: %d\n", qtdPorcas);
    printf("Quantidade de arruelas: %d\n", qtdArruelas);

    printf("Total de desconto: R$%.2f \n", descontoTotal);
    printf("Total a pagar: R$%.2f", totalCompra);

}



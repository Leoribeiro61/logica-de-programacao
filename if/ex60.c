/*
60. O cardápio de uma lanchonete é o seguinte: 
Especificação Preço unitário
100 Cachorro quente 1,10 
101 Bauru simples 1,30 
102 Bauru c/ovo 1,50 
103 Hamburger 1,10 
104 Cheeseburger 1,30 
105 Refrigerante 1,00 
Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule 
o valor a ser pago por aquele lanche. Considere que a cada execução somente 
será calculado um item. 

ENTRADA: codigo e a quantidade do produto desejado
PROCESSAMENTO: fazer o calculo para saber quanto ira pagar
SAIDA: o valor a ser pago por aquele lanche 
*/

#include <stdio.h>

int main(){
    int codigo = 0;
    int quantidade = 0;
    float valorPago = 0;

    printf("\nCardapio da lanchonete:\n");
    printf("100 Cachorro quente R$1,10 \n");
    printf("101 Bauru simples R$1,30 \n");
    printf("102 Bauru c/ovo R$1,50 \n");
    printf("103 Hamburger R$1,10 \n");
    printf("104 Cheeseburger R$1,30 \n");
    printf("105 Refrigerante 1,00 \n");

    printf("Digite o codigo do produto desejado: \n");
    scanf("%d", &codigo);

    printf("Digite a quantidade desejada: \n");
    scanf("%d", &quantidade);

    if(codigo == 100){
        valorPago = quantidade * 1.10; 
        printf("Quantidade: %d", quantidade);
        printf("O valor a ser pago e: %.2f\n", valorPago);
    } else if(codigo == 101){
        valorPago = quantidade * 1.30;
        printf("Quantidade: %d\n", quantidade);
        printf("O valor a ser pago e: %.2f\n", valorPago);
    } else if(codigo == 102){
        valorPago = quantidade * 1.50;
        printf("Quantidade: %d\n", quantidade);
        printf("O valor a ser pago e: %.2f\n", valorPago);
    } else if(codigo == 103){
        valorPago = quantidade * 1.10;
        printf("Quantidade: %d\n", quantidade);
        printf("O valor a ser pago e: %.2f\n", valorPago);
    } else if(codigo == 104){
        valorPago = quantidade * 1.30;
        printf("Quantidade: %d\n", quantidade);
        printf("O valor a ser pago e: %.2f\n", valorPago);
    } else if(codigo == 105){
        valorPago = quantidade * 1.00;
        printf("Quantidade: %d\n", quantidade);
        printf("O valor a ser pago e: %.2f\n", valorPago);
    } else {
        printf("Entrada invalida!!");
    }





}
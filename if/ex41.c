/*A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores 
dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro 
vendido e mais 5% do valor das vendas. Faça um algoritmo que determine o 
salário total de um vendedor. 

ENTRADA: numero de carros vendidos e quantidade de vendas
PROCESSAMENTO: fazer o calculo para saber o salario de cada vendedor apos a comissao
SAIDA: salario total do vendedor

*/
#include <stdio.h>

int main(){
    int carrosVendidos = 0;
    float totalVendas = 0;
    float salarioFixo = 0;
    float comissaoFixa = 50.00; 
    float percentualVendas = 0.05;
    float comissaoTotal = 0;
    float comissaoPercentual = 0;
    float salarioTotal = 0;

    printf("Digite o salario fixo do vendedor em R$: \n");
    scanf("%f", &salarioFixo);

    printf("Digite o numero de carros vendidos: \n");
    scanf("%d", &carrosVendidos);

    printf("Digite o valor total das vendas: R$");
    scanf("%f", &totalVendas);

    salarioFixo = salarioFixo * 2;

    if(carrosVendidos > 0){
        comissaoTotal = carrosVendidos * comissaoFixa;
    } else {
        comissaoTotal = 0;
    }

    if(totalVendas > 0){
        comissaoPercentual = totalVendas * percentualVendas;
    } else {
        comissaoPercentual = 0;
    }

    salarioTotal = salarioFixo + comissaoTotal + comissaoPercentual;

    printf("Salario fixo do vendedor: R$%.2f\n", salarioFixo);
    printf("Comissao fixa por carros vendidos: R$%.2f\n", comissaoTotal);
    printf("Comissao percentual sobre os valores das vendas: R$%.2f\n", comissaoPercentual);
    printf("Salario total do vendedor: R$%.2f\n", salarioTotal);

}


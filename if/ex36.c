/*
36. Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma 
comissão calculada de acordo com o valor de suas vendas. Se o valor da venda 
de um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor 
vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 
50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro 
caso, a comissão será de 7%. Escreva um algoritmo que gere um relatório 
contendo nome, valor da venda e comissão de cada um dos corretores. O 
relatório deve mostrar também o total de vendas da empresa. 

ENTRADA: nome dos corretores e valores da venda
PROCESSAMENTO: calcular a comissao de acordo com o valor da venda
SAIDA: nome dos corretores, comissão, relatorio
*/

#include <stdio.h>

int main(){
    float venda1 = 0;
    float venda2 = 0;
    float venda3 = 0;
    float comissao1 = 0;
    float comissao2 = 0;
    float comissao3 = 0;
    float totalVendas = 0;
    char nome1 [50];
    char nome2 [50];
    char nome3 [50];

    printf("Digite o nome do primeiro corretor: \n");
    scanf("%s", &nome1);
    getchar();

    printf("Digite o valor da venda do primeiro corretor: R$ \n");
    scanf("%f", &venda1);
    getchar();

    printf("Digite o nome do segundo corretor: \n");
    fgets(nome2, 50, stdin);
    getchar();

    printf("Digite o valor da venda do segundo corretor: R$ \n");
    scanf("%f", &venda2);
    getchar();

    printf("Digite o nome do terceiro corretor: \n");
    fgets(nome3, 50, stdin);
    getchar();

    printf("Digite o valor da venda do terceiro corretor: R$ \n");
    scanf("%f", &venda3);
    getchar();

    if(venda1 > 50000){
        comissao1 = venda1 * 0.12;
    } else if (venda1 >= 30000 && venda1 < 50000) {
        comissao1 = venda1 * 0.095;
    } else {
        comissao1 = venda1 * 0.07;
    }

    if(venda2 > 50000){
        comissao2 = venda2 * 0.12;
    } else if (venda2 >= 30000 && venda2 < 50000) {
        comissao2 = venda2 * 0.095;
    } else {
        comissao2 = venda2 * 0.07;
    }

    if(venda3 > 50000){
        comissao3 = venda3 * 0.12;
    } else if (venda3 >= 30000 && venda3 < 50000) {
        comissao3 = venda3 * 0.095;
    } else {
        comissao3 = venda3 * 0.07;
    }

    totalVendas = venda1 + venda2 + venda3;

    printf("RELATORIOS\n");
    printf("Corretor 1: %s\n", nome1);
    printf("Valor da venda: %.2f\n", venda1);
    printf("Comissao: %.2f\n", comissao1);

    printf("Corretor 2: %s\n", nome2);
    printf("Valor da venda: %.2f\n", venda2);
    printf("Comissao: %.2f\n", comissao2);

    printf("Corretor 3: %s\n", nome3);
    printf("Valor da venda: %.2f\n", venda3);
    printf("Comissao: %.2f\n", comissao3);

    printf("Total de vendas da empresa: %.3f\n", totalVendas);
}
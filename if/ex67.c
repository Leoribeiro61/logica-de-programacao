/*
67. Crie o algoritmo Funcionario para calcular o aumento salarial de um empregado. 
Por padrão, o aumento será de 15%. Entretanto, deve ser aplicada uma regra 
diferente para cada faixa salarial. Regras: 
a) se 1.500,00 <= salarioAtual < 1.750,00: aumento igual a 12% 
b) se 1.750,00 <= salarioAtual < 2.000,00: aumento igual a 10% 
c) se 2.000,00 <= salarioAtual < 3.000,00: aumento igual a 7% 
d) se salarioAtual acima de 3.000,00: aumento igual a 5%. 


ENTRADA: salario atual do funcionario
PROCESSAMENTO: calcular a quantidade de aumento de acordo com o salario atual
SAIDA: salario com reajuste
*/

#include <stdio.h>

int main() {
    float salarioAtual = 0;
    float aumento = 0;
    float salarioFinal = 0;

    printf("Digite o salario atual do funcionario: R$ ");
    scanf("%f", &salarioAtual);

    if (salarioAtual >= 1500.00 && salarioAtual < 1750.00) {
        aumento = salarioAtual * 0.12; 
    } 
    else if (salarioAtual >= 1750.00 && salarioAtual < 2000.00) {
        aumento = salarioAtual * 0.10; 
    } 
    else if (salarioAtual >= 2000.00 && salarioAtual < 3000.00) {
        aumento = salarioAtual * 0.07; 
    } 
    else if (salarioAtual > 3000.00) {
        aumento = salarioAtual * 0.05; 
    } 
    else {
        aumento = salarioAtual * 0.15; 
    }

    salarioFinal = salarioAtual + aumento;

    printf("Salario atual: R$ %.2f\n", salarioAtual);
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Salario final com aumento: R$ %.2f\n", salarioFinal);
}

/*
68. Crie um algoritmo que calcula o desconto previdenciário de um funcionário. Dado 
um salário, o programa deve retornar o valor do desconto proporcional ao 
mesmo. O cálculo segue a regra: o desconto é de 11% do valor do salário, 
entretanto, o valor máximo de desconto é 318,20. Sendo assim, ou o algoritmo 
retorna o valor equivalente a 11% sobre o salário ou 318,20.

ENTRADA: salario do funcionario
PROCESSAMENTO: calcular o desconto previdenciario 
SAIDA: o total de desconto
*/

#include <stdio.h>

int main() {
    float salario = 0;
    float desconto = 0;

    printf("Digite o salario do funcionario: R$ ");
    scanf("%f", &salario);

    desconto = salario * 0.11;

    if (desconto > 318.20) {
        desconto = 318.20;
    }

    printf("Salario: R$ %.2f\n", salario);
    printf("Desconto previdenciario: R$ %.2f\n", desconto);
}

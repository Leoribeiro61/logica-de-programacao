/*
ENTRADA:
PROCESSAMENTO:
SAIDA:
*/

#include <stdio.h>

int main(){
    float horasTrabalhadas;
    float valorHora;
    float percentualDesconto;
    float totalDesconto;
    float salarioLiquido;
    float salarioBruto;

    printf("Digite a quantidade de horas trabalhadas no mes: \n");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o valor da hora trabalhada: \n");
    scanf("%f", &valorHora);

    printf("Digite o valor de percentual de desconto: \n");
    scanf("%f", &percentualDesconto);

    salarioBruto = horasTrabalhadas * valorHora;
    totalDesconto = (percentualDesconto/100) * salarioBruto;
    salarioLiquido = salarioBruto - totalDesconto;

    printf("Horas trabalhadas: %.2f\n", horasTrabalhadas);
    printf("Salario bruto: %.2f\n", salarioBruto);
    printf("Desconto: %.2f\n", totalDesconto);
    printf("Salario liquido: %.2f\n", salarioLiquido);

    
}
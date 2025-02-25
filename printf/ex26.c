/*
ENTRADA: salario bruto de um cidadão
PROCESSAMENTO: calcular o desconto em cima do salario bruto
SAIDA: salario liquido do cidadão
*/

#include <stdio.h>

int main(){
    float salarioBruto = 0;
    float salarioParcial = 0;
    float desconto = 0;
    float imposto = 0;
    float salarioLiquido = 0;
     

    printf("Digite o valor do salario: \n");
    scanf("%f", &salarioBruto);

    desconto = (salarioBruto * 10) / 100;
    salarioParcial = salarioBruto - desconto; 
    imposto = (salarioParcial  * 5) / 100;
    salarioLiquido = salarioParcial - imposto;

    printf("O valor do desconto da contribuicao a previdencia: %.2f\n", desconto);
    printf("O valor do desconto de um determinado imposto e: %.2f\n", imposto);
    printf("O valor do salario apos o desconto de 10%% e: %.2f\n", salarioParcial);
    printf("O valor do salario liquido depois dos descontos e: %.2f\n", salarioLiquido);

}
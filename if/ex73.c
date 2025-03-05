/*
73. Faça um programa, utilizando estrutura de condição, que receba um número 
real, digitado pelo usuário e mostre o menu para selecionar o tipo de cálculo que 
deve ser realizado: 
101-Raiz quadrada 
102-A metade 
103-10% do número 
104-O dobro 
Escolha a opção: 

ENTRADA: um numero real
PROCESSAMENTO: verificar qual calculo a ser feito de acordo com ocodigo digitdo
SAIDA: raiz quadrada, metade, 10% do numero, o dobro
*/

#include <stdio.h>
#include <math.h>

int main() {
    float numero = 0;
    int opcao = 0;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    printf("Escolha a opcao:\n");
    printf("101 - Raiz quadrada\n");
    printf("102 - A metade\n");
    printf("103 - 10%% do numero\n");
    printf("104 - O dobro\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 101:
            printf("A raiz quadrada de %.2f e %.2f\n", numero, sqrt(numero));
            break;
        case 102:
            printf("A metade de %.2f e %.2f\n", numero, numero / 2);
            break;
        case 103:
            printf("10%% de %.2f e %.2f\n", numero, numero * 0.10);
            break;
        case 104:
            printf("O dobro de %.2f e %.2f\n", numero, numero * 2);
            break;
        default:
            printf("Opcao invalida! Por favor, escolha uma opcao valida.\n");
            break;
    }
}

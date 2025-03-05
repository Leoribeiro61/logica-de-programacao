/*
75. Faça um programa que receba o valor da venda, escolha a condição de 
pagamento no menu e mostre o total da venda final conforme condições a seguir: 
Venda a Vista - desconto de 10% 
Venda a Prazo 30 dias - desconto de 5% 
Venda a Prazo 60 dias - mesmo preço 
Venda a Prazo 90 dias - acréscimo de 5% 
Venda com cartão de débito - desconto de 8% 
Venda com cartão de crédito - desconto de 7% 
 

ENTRADA: 
PROCESSAMENTO: 
SAIDA: 
*/

#include <stdio.h>

int main() {
    float valorVenda = 0;
    float valorFinal = 0;
    int opcao;

    printf("Digite o valor da venda: R$ ");
    scanf("%f", &valorVenda);

    printf("\nEscolha a condicao de pagamento:\n");
    printf("1 - Venda a Vista\n");
    printf("2 - Venda a Prazo 30 dias\n");
    printf("3 - Venda a Prazo 60 dias\n");
    printf("4 - Venda a Prazo 90 dias\n");
    printf("5 - Venda com cartao de debito\n");
    printf("6 - Venda com cartao de credito\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            valorFinal = valorVenda * 0.90; 
            printf("Venda a Vista: Desconto de 10%%\n");
            break;
        case 2: 
            valorFinal = valorVenda * 0.95;
            printf("Venda a Prazo 30 dias: Desconto de 5%%\n");
            break;
        case 3: 
            valorFinal = valorVenda; 
            printf("Venda a Prazo 60 dias: Mesmo preco\n");
            break;
        case 4:
            valorFinal = valorVenda * 1.05; 
            printf("Venda a Prazo 90 dias: Acrescimo de 5%%\n");
            break;
        case 5:
            valorFinal = valorVenda * 0.92; 
            printf("Venda com cartão de debito: Desconto de 8%%\n");
            break;
        case 6: 
            valorFinal = valorVenda * 0.93;
            printf("Venda com cartao de credito: Desconto de 7%%\n");
            break;
        default:
            printf("Opcao invalida! Por favor, escolha uma opcao valida.\n");
    }

    printf("Valor final da venda: R$ %.2f\n", valorFinal);

}

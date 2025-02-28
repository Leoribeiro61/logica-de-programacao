/*
54. Faça um algoritmo que leia quatro números (Opção , Num1 , Num2 e Num3) e 
mostre o valor de Num1 se Opção for igual a 2; o valor de Num2 se Opção for 
igual a 3; e o valor de Num3 se Opção for igual a 4. Os únicos valores possíveis 
para a variável Opção são 2, 3 e 4.

ENTRADA: 4 numeros 
PROCESSAMENTO: verificar a opcao digitada e mostrar na tela 
SAIDA: mostrar os numeros de acordo com a opcao digitada
*/

#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int opcao = 0;

    printf("Digite o valor para o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Digite o valor para o segundo numero: \n");
    scanf("%d", &num2);

    printf("Digite o valor para o terceiro numero: \n");
    scanf("%d", &num3);

    printf("Digite o valor para opcao (2, 3 e 4): \n");
    scanf("%d", &opcao);

    if(opcao == 2){
        printf("Primeiro numero: %d\n", num1);
    } else if(opcao == 3){
        printf("Segundo numero: %d\n", num2);
    } else if(opcao == 4){
        printf("Terceiro numero: %d\n", num3);
    } else {
        printf("Entrada invalida!\n");

    }


}
/*
37. Escreva um algoritmo que determine o número de dias que uma pessoa já viveu. 
Considere que um mês tenha 30 dias.

ENTRADA: data de nascimento de uma pessoa
PROCESSAMENTO: fazer o calculo para descobrir a quantidade de dias que a pessoa ja viveu
SAIDA: quantidade de dias vividos de uma pessoa
*/

#include <stdio.h>

int main(){
    int anoNascimento = 0;
    int mesNascimento = 0;
    int diaNascimento = 0;
    int anoAtual = 0;
    int diaAtual = 0;
    int mesAtual = 0;
    int diasVividos = 0;

    printf("Digite o ano de seu nascimento: \n");
    scanf("%d", &anoNascimento);

    printf("Digite o dia de seu nascimento: \n");
    scanf("%d", &diaNascimento);

    printf("Digite o mes de seu nascimento: (1-12) \n");
    scanf("%d", &mesNascimento);

    printf("Digite o ano atual: \n");
    scanf("%d", &anoAtual);

    printf("Digite o dia atual: \n");
    scanf("%d", &diaAtual);

    printf("Digite o mes atual: (1-12)\n");
    scanf("%d", &mesAtual);

    diasVividos = (anoAtual - anoNascimento) * 360;


    printf("A quantidade de dias vividos e: %d \n", diasVividos);
    

}
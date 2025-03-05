/*
64. Crie um algoritmo em que o aluno digita duas notas bimestrais e informa se o 
aluno foi aprovado ou não. Nota: Considere aprovado se a nota for maior que 
5.0. 

ENTRADA: notas do aluno
PROCESSAMENTO: calcular a media do aluno
SAIDA: mostrar se o aluno foi aprovado ou reprovado
*/

#include <stdio.h>

int main() {
    float nota1 = 0;
    float nota2 = 0;
    float media = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media > 5.0) {
        printf("Aluno aprovado! Media: %.2f\n", media);
    } else {
        printf("Aluno reprovado! Media: %.2f\n", media);
    }
}

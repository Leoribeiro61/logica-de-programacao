/*
ENTRADA: 3 notas de um aluno
PROCESSAMENTO: calcular a media
SAIDA: media final do aluno
*/

#include <stdio.h>

int main(){
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float media = 0;

    printf("Digite a primeira nota do aluno: \n ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno: \n ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota do aluno: \n ");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10; 

    printf("A media do aluno eh: %.2f\n", media);


}


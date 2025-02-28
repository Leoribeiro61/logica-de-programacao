/*
55. Calcule a média aritmética das três notas de um aluno e mostre, além do valor 
da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 
7; a mensagem “em prova final” caso a média seja menor que 7 e maior ou igual 
a 4; e "reprovado", caso contrário. 

ENTRADA:  notas do aluno
PROCESSAMENTO: calcular a media aritmetica 
SAIDA: mostrar o valor da media e se foi aprovado, em prova final ou reprovado
*/

#include <stdio.h>

int main(){
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float media = 0;

    printf("Digite a primeira nota do aluno: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno: \n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota do aluno: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("O valor da media aritmedica do aluno e: %.2f\n", media);

    if(media >= 7){
        printf("Aprovado!!");
    } else if (media < 7 && media >= 4){
        printf("Em prova final!!");
    } else {
        printf("Reprovado!!");
    }   

}
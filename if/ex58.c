/*
58. Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a 
média ponderada do aluno, considerando que o peso para a maior nota seja 4 e 
para as duas restantes, 3. Mostre o código do aluno, suas três notas, a média 
calculada e uma mensagem: "APROVADO" se a média for maior ou igual a 5 e 
"REPROVADO" se a média for menor que 5. 

ENTRADA: codigo e as tres notas do aluno 
PROCESSAMENTO: calcular a media, e verificar se foi aprovado e reprovado
SAIDA: codigo do aluno, media, se foi aprovado ou nao
*/

#include <stdio.h>

int main(){
    int codigo = 0;
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float media = 0;

    printf("Digite o codigo do aluno: \n");
    scanf("%d", &codigo);

    printf("Digite a primeira nota do aluno: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno: \n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota do aluno: \n");
    scanf("%f", &nota3);

    media = ((nota1 * 4) + (nota2 * 3) + (nota3 * 3)) / 10;
    
    printf("Codigo do aluno: %d\n", codigo);
    printf("Primeira nota do aluno: %.2f\n", nota1);
    printf("Segunda nota do aluno: %.2f\n", nota2);
    printf("Terceira nota do aluno: %.2f\n", nota3);
    printf("Media do aluno: %.2f\n", media);

    if(media >= 5){
        printf("APROVADO!!\n");
    } else {
        printf("REPROVADO!!\n");
    }

}
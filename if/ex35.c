/*
ENTRADA: nome e notas de um candidato 
PROCESSAMENTO: calcular a media, 
SAIDA: nome, notas, media, se foi aprovado ou nao
*/

#include <stdio.h>

int main(){
    float notaPortugues = 0;
    float notaMatematica = 0;
    float notaConhecimentos = 0;
    float media = 0;
    char nome[50];

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite a nota de portugues: \n");
    scanf("%f", &notaPortugues);

    printf("Digite a nota de matematica: \n");
    scanf("%f", &notaMatematica);

    printf("Digite a nota de conhecimentos gerais: \n");
    scanf("%f", &notaConhecimentos);

    media = (notaConhecimentos + notaMatematica + notaPortugues) / 3;

    printf("Candidato %s, sua nota em portugues foi: %.2f\n", nome, notaPortugues);
    printf("Candidato %s, sua nota em matematica foi: %.2f\n", nome, notaMatematica);
    printf("Candidato %s, sua nota em conhecimentos gerais foi: %.2f\n", nome, notaConhecimentos);
    printf("Candidato %s, sua media foi: %.2f\n", nome, media);

    if (media >= 7 && notaConhecimentos >= 5 && notaMatematica >= 5 && notaPortugues >= 5){
        printf("O candidato foi aprovado!");
    } else{
        printf("O candidato foi reprovado!");
    }



}
/*
ENTRADA: matricula do aluno no formato AASDDD
PROCESSAMENTO: fazer a conversão para ano e semestre matriculado
SAIDA: ano e semestre matriculado
*/

#include <stdio.h>

int main(){
    int matricula = 0;
    int ano = 0;
    int semestre = 0;

    printf("Digite a matricula do aluno no formato AASDDD: ");
    scanf("%d", &matricula);

    ano = matricula / 10000;

    semestre = (matricula / 1000) % 10;

    printf("O aluno foi matriculado no ano de: 20%d,  e no %d semestre", ano, semestre);


}


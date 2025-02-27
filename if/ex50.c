/*
50. Suponha que o conceito de um aluno seja determinado em função da sua nota. 
Suponha, também, que esta nota seja um valor inteiro na faixa de 0 a 100, 
conforme a seguinte faixa: 
 Nota Conceito
 0 a 49 Insuficiente 
 50 a 64 Regular 
 65 a 84 Bom 
 85 a 100 Ótimo

Crie um algoritmo que apresente o conceito e a nota do aluno. 

ENTRADA: nota do aluno 
PROCESSAMENTO: verificar a nota e o conceito do aluno 
SAIDA: nota e conceito do aluno
*/

#include <stdio.h>

int main(){
    int nota = 0;

    printf("Digite a nota do aluno: \n");
    scanf("%d", &nota); 

    if(nota >= 0 && nota <= 49){
        printf("A nota do aluno foi: %d\n", nota);
        printf("Conceito: Insuficiente.\n");
    } else if(nota >= 50 && nota <= 64){
        printf("A nota do aluno foi: %d\n", nota);
        printf("Conceito: Regular.\n");
    } else if(nota >= 65 && nota <= 84){
        printf("A nota do aluno foi: %d\n", nota);
        printf("Conceito: Bom.\n");
    } else if(nota >= 85 && nota <= 100){
        printf("A nota do aluno foi: %d\n", nota);
        printf("Conceito: Otimo.\n");
    } else{
        printf("Entrada invalida!!");
    }
}
/*
72. Um determinado clube de futebol pretende classificar seus atletas em categorias 
e para isto ele contratou um programador para criar um programa que 
executasse esta tarefa. Para isso o clube criou uma tabela que continha a faixa 
etária do atleta e sua categoria. A tabela está demonstrada abaixo: 
IDADE CATEGORIA 
De 05 a 10 Infantil 
De 11 a 15 Juvenil 
De 16 a 20 Junior 
De 21 a 25 Profissional 
Construa um programa que solicite o nome e a idade de um atleta e imprima a 
sua categoria.

ENTRADA: nome e idade do atleta
PROCESSAMENTO: vericar qual a categoria de acordo com a idade
SAIDA: categoria do atleta
*/

#include <stdio.h>

int main() {
    char nome[50];
    int idade = 0;

    printf("Digite o nome do atleta: ");
    scanf("%s", nome);
    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    switch (idade) {
        case 5 ... 10: 
            printf("Atleta: %s, categoria: Infantil\n", nome);
            break;
        case 11 ... 15: 
            printf("Atleta: %s, categoria: Juvenil\n", nome);
            break;
        case 16 ... 20: 
            printf("Atleta: %s, categoria: Junior\n", nome);
            break;
        case 21 ... 25:
            printf("Atleta: %s, categoria: Profissional\n", nome);
            break;
        default:
            printf("Idade fora da faixa de classificacao.\n");
    }
}

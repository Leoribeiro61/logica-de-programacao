/*
61. Um usuário deseja um algoritmo pelo qual possa escolher que tipo de média 
deseja calcular a partir de três notas. Faça um algoritmo que leia as notas, a 
opção escolhida pelo usuário e calcule a média: 
1- aritmética 
2- ponderada (pesos 3, 3, 4)

ENTRADA: notas de um aluno
PROCESSAMENTO: calcular a media, de acordo com o que o usuario desejar
SAIDA: a media do usuario
*/

#include <stdio.h>

int main() {
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float media = 0;
    int opcao;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);

    printf("Escolha o tipo de media que deseja calcular:\n");
    printf("Digite 1 para calcular a - Media aritmetica:\n");
    printf("Digite 2 para calcular a - Media ponderada (pesos 3, 3, 4):\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        media = (nota1 + nota2 + nota3) / 3;
        printf("A media aritmetica e: %.2f\n", media);
    } else if (opcao == 2) {
        media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / (3 + 3 + 4);
        printf("A media ponderada e: %.2f\n", media);
    } else {
        printf("Opcao invalida! Por favor, escolha 1 ou 2.\n");
    }

}

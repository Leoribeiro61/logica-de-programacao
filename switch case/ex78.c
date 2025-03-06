/*
78. Faça um programa que lê quatro valores: I, A, B e C, onde I é um número inteiro 
e positivo e A, B, e C são quaisquer valores reais. O programa deve escrever os 
valores lidos e: 
• se I = 1, escrever os três valores A, B e C em ordem crescente; 
• se I = 2, escrever os três valores A, B e C em ordem decrescente; 
• se I = 3, escrever os três valores A, B, e C de forma que o maior valor fique 
entre os outros dois; 
• se I não for um dos três valores acima, dar uma mensagem indicando isto.

ENTRADA: 4 valores, sendo 1 inteiro e outros 3 reais
PROCESSAMENTO: fazer a verificação para que a saida seja de acordo com a opção desejada
SAIDA: valores em ordem crescente, decrescente ou o maior entre os outros 2 numeros
*/

#include <stdio.h>

int main(){
    int I = 0;
    float A = 0;
    float B = 0;
    float C = 0;

    printf("Digite um valor para 'I' (1, 2 ou 3): \n");
    scanf("%d", &I); 

    printf("Digite um valor para 'A': \n");
    scanf("%f", &A);

    printf("Digite um valor para 'B': \n");
    scanf("%f", &B);

    printf("Digite um valor para 'C': \n");
    scanf("%f", &C);

    switch (I){
        case 1:
            if (A <= B && A <= C) {
                printf("%.2f \n", A);
                if (B <= C) {
                printf("%.2f %.2f\n", B, C);
                }else { 
                printf("%.2f %.2f\n", C, B);
                }
            }
            else if (B <= A && B <= C) {
                printf("%.2f", B);
                if (A <= C) {
                printf("%.2f %.2f\n", A, C);
                }else { 
                printf("%.2f %.2f\n", C, A);
                }
            }
            else {
                printf("%.2f ", C);
                if (A <= B){ 
                printf("%.2f %.2f\n", A, B);
            }   else { 
                printf("%.2f %.2f\n", B, A);
            }
            }
            break;

           
        case 2: 
            if (A >= B && A >= C) {
                printf("%.2f ", A);
                if (B >= C) {
                printf("%.2f %.2f\n", B, C);
                }else { 
                printf("%.2f %.2f\n", C, B);
                }
            }
            else if (B >= A && B >= C) {
                printf("%.2f", B);
                if (A >= C) {
                printf("%.2f %.2f\n", A, C);
                }else { 
                printf("%.2f %.2f\n", C, A);
                }
            }
            else {
                printf("%.2f ", C);
                if (A >= B){ 
                printf("%.2f %.2f\n", A, B);
            }   else { 
                printf("%.2f %.2f\n", B, A);
            }
            }
            break;

        case 3: 
            if(A > B && A > C){
                printf("Maior no meio: %.2f %.2f %.2f", B, A, C); 
            } else if(B > A && B > C){
                printf("Maior no meio: %.2f %.2f %.2f", A, B, C); 
            } else{
                printf("Maior no meio: %.2f %.2f %.2f", B, C, A); 
            }
            break;

        default:
            printf("Valor de I invalido! \n");
            break;
    }
}
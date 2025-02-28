/*
53. Faça um algoritmo que leia três números e mostre-os em ordem decrescente. 

ENTRADA: 3 numeros 
PROCESSAMENTO: fazer a verificação para imprimir os numeros em ordem decrescente
SAIDA: mostrar os numeros em ordem decrescente
*/

#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Digite um valor para 'A': \n");
    scanf("%d", &a);

    printf("Digite um valor para 'B': \n");
    scanf("%d", &b);

    printf("Digite um valor para 'C': \n");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        printf("%d ", a);
        if (b >= c) {
        printf("%d %d\n", b, c);
        }else { 
        printf("%d %d\n", c, b);
        }
    }
    else if (b >= a && b >= c) {
        printf("%d", b);
        if (a >= c) {
        printf("%d %d\n", a, c);
        }else { 
        printf("%d %d\n", c, a);
        }
    }
    else {
        printf("%d ", c);
        if (a >= b){ 
        printf("%d %d\n", a, b);
    }   else { 
        printf("%d %d\n", b, a);
    }
}

}
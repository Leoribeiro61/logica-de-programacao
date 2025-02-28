/*
56. Elaborar um algoritmo que lê três valores a, b, c e os escreve. A seguir, encontre 
o maior dos três valores e o escreva com a mensagem : "É o maior”. 

ENTRADA:  3 valores
PROCESSAMENTO: verificar qual o maior numero 
SAIDA: maior numero 
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

    printf("O valor de 'A' e: %d\n", a);
    printf("O valor de 'B' e: %d\n", b);
    printf("O valor de 'C' e: %d\n", c);

    if(a > b && a > c){
        printf("O valor de 'A' e maior: %d\n", a);
    } else if(b > a && b > c){
        printf("O valor de 'B' e maior: %d\n", b);
    } else{
        printf("O valor de 'C' e maior: %d\n", c);
    }

}
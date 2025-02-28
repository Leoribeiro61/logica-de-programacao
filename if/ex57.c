/*
57. Elaborar um algoritmo que lê dois valores a e b e os escreve com a mensagem: 
“São múltiplos” ou “Não são múltiplos”.  

ENTRADA:  2 numeros
PROCESSAMENTO: verificar se são multiplos 
SAIDA: se sao muliplos ou nao
*/

#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;

    printf("Digite um valor para 'A': \n");
    scanf("%d", &a);

    printf("Digite um valor para 'B': \n");
    scanf("%d", &b);

    if(a % b == 0 || b % a == 0){
        printf("Os numeros sao multiplos!\n");
    } else{
        printf("Os numeros nao sao multiplos!");
    }

}


/*
81. Crie um algoritmo para ler uma letra do alfabeto e mostrar uma mensagem: se é
vogal ou consoante.

ENTRADA: letra do alfabeto
PROCESSAMENTO: verificar atraves da letra do alfabeto se é vogal ou consoante
SAIDA: a letra vogal ou consoante
*/

#include <stdio.h>

int main(){
    char letra;

    printf("Digite alguma letra do alfabeto e descubra se e vogal ou consoante: \n");
    scanf("%c", &letra);

    switch(letra){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("VOGAL!\n");
            break;
        default:
            printf("CONSOANTE!\n");
            break;
    }
}
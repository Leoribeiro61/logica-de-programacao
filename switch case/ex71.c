/*
71. Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas e 
apresente o nome da mais pesada e o nome da mais alta.

ENTRADA: nome, peso e altura de duas pessoas
PROCESSAMENTO: verificar que é mais alta e mais pesada
SAIDA: qual a pessoa mais alta e mais pesada
*/

#include <stdio.h>

int main() {
    char nome1[50];
    char nome2[50];
    float altura1 = 0;
    float altura2 = 0;
    float peso1 = 0;
    float peso2 = 0;

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", nome1);
    printf("Digite a altura (em metros) da primeira pessoa: ");
    scanf("%f", &altura1);
    printf("Digite o peso (em kg) da primeira pessoa: ");
    scanf("%f", &peso1);

    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", nome2);
    printf("Digite a altura (em metros) da segunda pessoa: ");
    scanf("%f", &altura2);
    printf("Digite o peso (em kg) da segunda pessoa: ");
    scanf("%f", &peso2);

    if (altura1 > altura2) {
        printf("A pessoa mais alta e: %s\n", nome1);
    } else if (altura2 > altura1) {
        printf("A pessoa mais alta e: %s\n", nome2);
    } else {
        printf("As duas pessoas tem a mesma altura.\n");
    }

    if (peso1 > peso2) {
        printf("A pessoa mais pesada e: %s\n", nome1);
    } else if (peso2 > peso1) {
        printf("A pessoa mais pesada e: %s\n", nome2);
    } else {
        printf("As duas pessoas tem o mesmo peso.\n");
    }

}

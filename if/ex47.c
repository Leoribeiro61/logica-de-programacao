/*
47. Construir um algoritmo que tome como entradas três valores distintos e os 
apresente (imprima) em ordem crescente (menor para o maior). 

ENTRADA: 3 valores 
PROCESSAMENTO: colocar os valores em ordem crescente
SAIDA: ordem crescente 
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

    if (a <= b && a <= c) {
        printf("%d ", a);
        if (b <= c) {
        printf("%d %d\n", b, c);
    }   else { 
        printf("%d %d\n", c, b);
    }
}
    else if (b <= a && b <= c) {
        printf("%d", b);
        if (a <= c) {
        printf("%d %d\n", a, c);
    }   else { 
        printf("%d %d\n", c, a);
    }
}
    else {
        printf("%d ", c);
        if (a <= b){ 
        printf("%d %d\n", a, b);
    }   else { 
        printf("%d %d\n", b, a);
    }
}


}
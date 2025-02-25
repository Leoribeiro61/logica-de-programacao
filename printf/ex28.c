/*
ENTRADA: numero de 3 algarismos
PROCESSAMENTO: fazer calculo para inverter ordem
SAIDA: numero inverso
*/

#include <stdio.h>

int main(){
    int numero = 0;
    int resultado = 0;

    printf("Digite um numero de 3 algarismos: \n");
    scanf("%d", &numero);

    resultado = ((numero % 10) * 100) + ((numero / 10) % 10) * 10 + numero / 100; 
    
    printf("O numero inverso e: %d\n", resultado);
   
}

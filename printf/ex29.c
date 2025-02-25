/*
ENTRADA: data no formato DDMMAA
PROCESSAMENTO: converter a data para aparecer AAMMDD
SAIDA: data no formato AAMMDD
*/

#include <stdio.h>

int main(){
    int data = 0;
    int resultado = 0;

    printf("Digite a data no formato DD/MM/AA: \n");
    scanf("%d", &data);

    resultado = (data % 100) * 10000 + ((data / 100) % 100) * 100 + data / 10000; //((data % 10000) * 10000) + (data / 1000) % 10 * 10; //data / 100;

    printf("A data digitada no formato DD/MM/AA e: %d\n", data);
    printf("A data digitada no formato AA/MM/DD e: %d\n", resultado);

}
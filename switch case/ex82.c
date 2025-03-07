/*
82. Construa um algoritmo que, tendo como dados de entrada o preço de um
produto e um código de origem, mostre o preço junto de sua procedência (ex.
500,00 – Sul). Caso o código não seja nenhum dos especificados, o produto
deve ser encarado como importado.
Código de origem
1 – Sul 5 ou 6 – Nordeste
2 – Norte 7 ou 8 ou 9 – Sudeste
3 – Leste 10 até 20 – Centro Oeste
4 – Oeste 25 até 35 – Nordeste

ENTRADA: 
PROCESSAMENTO: 
SAIDA: 
*/

#include <stdio.h>

int main(){
    float preco = 0;
    int codigo = 0;

    printf("Digite o preco do produto: \n");
    scanf("%f", &preco);

    printf("Digite o codigo do produto (1 ao 35): \n");
    scanf("%d", &codigo);

    switch(codigo){
        case 1:
            printf("O valor do produto e: %.2f\n", preco);
            printf("A origem do produto: Sul\n");
            break;
        case 2:
            printf("O valor do produto e: %.2f\n", preco);
            printf("A origem do produto: Norte\n");
            break;
        case 3:
            printf("O valor do produto e: %.2f\n", preco);
            printf("A origem do produto: Leste\n");
            break;
        case 4:
            printf("O valor do produto e: %.2f\n", preco);
            printf("A origem do produto: Oeste\n");
            break;
        case 5 ... 6:
            printf("O valor do produto e: %.2f\n", preco);
            printf("A origem do produto: Nordeste\n");
            break;
        case 7 ... 9:
            printf("O valor do produto e: %.2f\n", preco);
            printf("A origem do produto: Sudeste\n");
            break;
        case 10 ... 20:
            printf("O valor do produto e: %.2f\n", preco);
            printf("A origem do produto: Centro Oeste\n");
            break;
        /*case 25 ... 35:
            printf("O valor do produto e: %.2f", preco);
            printf("A origem do produto: Norte \n");
            break;*/
        default:
            printf("O valor do produto e: %.2f", preco);
            printf("A origem do produto: Importado \n");
            break;
    }
}
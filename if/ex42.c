/*
42. Uma pessoa comprou quatro artigos em uma loja. Para cada artigo, tem-se 
nome, preço e percentual de desconto. Faça um algoritmo que imprima nome, 
preço e preço com desconto de cada artigo e o total a pagar.

ENTRADA: nome dos itens, preço a pagar e o percentual de desconto
PROCESSAMENTO: calcular o percentual de desconto
SAIDA: preço com desconto de cada item e o valot total a pagar
*/

int main(){
    char item1[50];
    char item2[50];
    char item3[50];
    char item4[50];
    float preco1 = 0;
    float preco2 = 0;
    float preco3 = 0;
    float preco4 = 0;
    float percentualDesconto1 = 0;
    float percentualDesconto2 = 0;
    float percentualDesconto3 = 0;
    float percentualDesconto4 = 0;

    printf("Digite o nome do primeiro artigo: \n");
    scanf("%s", item1);

    printf("Digite o preco do primeiro artigo em R$: ");
    scanf("%f", &preco1);

    printf("Digite a quantidade de desconto do primeiro artigo: ");
    scanf("%f", &percentualDesconto1);

    printf("Digite o nome do segundo artigo: \n");
    scanf("%s", item2);

    printf("Digite o preco do segundo artigo em R$: ");
    scanf("%f", &preco2);

    printf("Digite a quantidade de desconto do segundo artigo: ");
    scanf("%f", &percentualDesconto2);

    printf("Digite o nome do terceiro artigo: \n");
    scanf("%s", item3);

    printf("Digite o preco do terceiro artigo em R$: ");
    scanf("%f", &preco3);

    printf("Digite a quantidade de desconto do terceiro artigo: ");
    scanf("%f", &percentualDesconto3);

    printf("Digite o nome do quarto artigo: \n");
    scanf("%s", item4);

    printf("Digite o preco do quarto artigo em R$: ");
    scanf("%f", &preco4);

    printf("Digite a quantidade de desconto do quarto artigo: ");
    scanf("%f", &percentualDesconto4);

    
}
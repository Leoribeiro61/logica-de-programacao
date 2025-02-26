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
    float precoComDesconto1 = 0;
    float precoComDesconto2 = 0;
    float precoComDesconto3 = 0;
    float precoComDesconto4 = 0;
    float total = 0; 


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


    if(percentualDesconto1 > 0) {
        precoComDesconto1 = preco1 - (preco1 * percentualDesconto1 / 100);
    } else {
        precoComDesconto1 = preco1;
    }

    if(percentualDesconto2 > 0) {
        precoComDesconto2 = preco2 - (preco2 * percentualDesconto1 / 100);
    } else {
        precoComDesconto2 = preco2;
    }

    if(percentualDesconto3 > 0) {
        precoComDesconto3 = preco3 - (preco3 * percentualDesconto3 / 100);
    } else {
        precoComDesconto3 = preco3;
    }

    if(percentualDesconto4 > 0) {
        precoComDesconto4 = preco4 - (preco4 * percentualDesconto4 / 100);
    } else {
        precoComDesconto4 = preco4;
    }


    printf("Artigo 1: %s\n", item1);
    printf("Preco original: R$ %.2f\n", preco1);
    printf("Preco com desconto: R$ %.2f\n", precoComDesconto1);
    total += precoComDesconto1;

    printf("Artigo 2: %s\n", item2);
    printf("Preco original: R$ %.2f\n", preco2);
    printf("Preco com desconto: R$ %.2f\n", precoComDesconto2);
    total += precoComDesconto2;

    printf("Artigo 3: %s\n", item3);
    printf("Preco original: R$ %.2f\n", preco3);
    printf("Preco com desconto: R$ %.2f\n", precoComDesconto3);
    total += precoComDesconto3;

    printf("Artigo 4: %s\n", item4);
    printf("Preco original: R$ %.2f\n", preco4);
    printf("Preco com desconto: R$ %.2f\n", precoComDesconto4);
    total += precoComDesconto4;

    
}
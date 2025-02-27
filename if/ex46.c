/*
46. Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. A taxa de 
serviços é de: 
• R$ 5.50 por diária, se o número de diárias for maior que 15; 
• R$ 6.00 por diária, se o número de diárias for igual a 15; 
• R$ 8.00 por diária, se o número de diárias for menor que 15. 
Construa um algoritmo que mostre o nome e o total da conta de um cliente.

ENTRADA:  nome do hospede e quantidade de dias que ficou no hotel
PROCESSAMENTO: calcular o valor total que o hospede pagou 
SAIDA: nome e total da conta do cliente

*/
#include <stdio.h>

#define DIARIA 60.00

int main(){
    int qtdDiarias = 0;
    //float taxaServico = 0;
    char nome[50];
    float totalConta = 0;

    printf("Digite o nome do hospede: \n");
    scanf("%s", nome);

    printf("Digite a quantidade de diarias que o hospede ficou no hotel: \n");
    scanf("%d", &qtdDiarias);

    if(qtdDiarias > 15){
        totalConta = (qtdDiarias * DIARIA) + (qtdDiarias * 5.50);

    } else if(qtdDiarias == 15){
        totalConta = (qtdDiarias * DIARIA) + (qtdDiarias * 6.00);
    } else if(qtdDiarias < 15){
        totalConta = (qtdDiarias * DIARIA) + (qtdDiarias * 8.00);
    } else{
        printf("Entrada invalida! \n");
    }

    printf("Nome do hospede: %s\n", nome);
    printf("Total da conta do cliente: %.2f", totalConta);

}




/*public static void main(String args[]){
    int qtdDiarias = 0;
    float diaria = 60.00;
    //float taxaServico = 0;
    String nome;
    float totalConta = 0;

    System.out.printf("Digite o nome do hospede: \n");
    nome = new Scanner(System.in).nextLine();

    System.out.printf("Digite a quantidade de diarias que o hospede ficou no hotel: \n");
    qtdDiarias = new Scanner(System.in).nextInt();

    if(qtdDiarias > 15){
        qtdDiarias = diaria + 5.50;
    } else if(qtdDiarias == 15){
        qtdDiarias = diaria + 6.00;
    } else if(qtdDiarias < 15){
        qtdDiarias = diaria + 8.00;
    } else{
        printf("Entrada invalida! \n");
    }

    totalConta = qtdDiarias + diaria;

    System.out.printf("Nome do hospede: %s\n", nome);
    System.out.printf("Total da conta do cliente: %.2f", totalConta);

}*/
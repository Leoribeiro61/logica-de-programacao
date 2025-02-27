<<<<<<< HEAD
/*

ENTRADA: nome, tipo e preco do picole
PROCESSAMENTO: calcular a quantidade vendida e o total arrecadado
SAIDA: quandidade vendida e valor arrecadado
*/

int main(){
    int picole1 = 0;
    int picole2 = 0;
    int picole3 = 0;
    int quantidade = 0;
    float total1 = 0;
    float total2 = 0;
    float total3 = 0;
    float totalArrecadado; 

    printf("Digite a quatidade de picoles vendidos do tipo 1: (R$ 0.50) \n");
    scanf("%d", &picole1);

    printf("Digite a quatidade de picoles vendidos do tipo 2: (R$ 0.60)\n");
    scanf("%d", &picole2);

    printf("Digite a quatidade de picoles vendidos do tipo 3: (R$ 0.75)\n");
    scanf("%d", &picole3);

    total1 = picole1 * 0.50;
    total2 = picole2 * 0.60;
    total3 = picole3 * 0.75;

    if(picole1 > 0){
        picole1 += quantidade;
    } else if(picole2 > 0){
        picole2 += quantidade;
    } else if(picole3 > 3){
        picole3 += quantidade;
    } else {
        printf("Entrada Invalida!");
    }

    totalArrecadado = total1 + total2 + total3;


    printf("Total de picoles vendidos do tipo 1: %d\n", picole1);
    printf("Total arrecado de picoles do tipo 1: %.2f\n", total1);

    printf("Total de picoles vendidos do tipo 2: %d\n", picole2);
    printf("Total arrecado de picoles do tipo 1: %.2f\n", total2);

    printf("Total de picoles vendidos do tipo 3: %d\n", picole3);
    printf("Total arrecado de picoles do tipo 1: %.2f\n", total3);



    printf("Total arrecadado: R$ %.2f\n", totalArrecadado);

=======
/*

ENTRADA: nome, tipo e preco do picole
PROCESSAMENTO: calcular a quantidade vendida e o total arrecadado
SAIDA: quandidade vendida e valor arrecadado
*/

int main(){
    int picole1 = 0;
    int picole2 = 0;
    int picole3 = 0;
    int quantidade = 0;
    float total1 = 0;
    float total2 = 0;
    float total3 = 0;
    float totalArrecadado; 

    printf("Digite a quatidade de picoles vendidos do tipo 1: (R$ 0.50) \n");
    scanf("%d", &picole1);

    printf("Digite a quatidade de picoles vendidos do tipo 2: (R$ 0.60)\n");
    scanf("%d", &picole2);

    printf("Digite a quatidade de picoles vendidos do tipo 3: (R$ 0.75)\n");
    scanf("%d", &picole3);

    total1 = picole1 * 0.50;
    total2 = picole2 * 0.60;
    total3 = picole3 * 0.75;

    if(picole1 > 0){
        picole1 += quantidade;
    } else if(picole2 > 0){
        picole2 += quantidade;
    } else if(picole3 > 3){
        picole3 += quantidade;
    } else {
        printf("Entrada Invalida!");
    }

    totalArrecadado = total1 + total2 + total3;


    printf("Total de picoles vendidos do tipo 1: %d\n", picole1);
    printf("Total arrecado de picoles do tipo 1: %.2f\n", total1);

    printf("Total de picoles vendidos do tipo 2: %d\n", picole2);
    printf("Total arrecado de picoles do tipo 1: %.2f\n", total2);

    printf("Total de picoles vendidos do tipo 3: %d\n", picole3);
    printf("Total arrecado de picoles do tipo 1: %.2f\n", total3);



    printf("Total arrecadado: R$ %.2f\n", totalArrecadado);



    









>>>>>>> d75d9d1aa9c0bf8d6750bf52ea6c2b2f0bc592a3
}
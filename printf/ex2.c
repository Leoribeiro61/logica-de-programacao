#include <stdio.h>

int main(){
    float area, base, altura;

    printf("Digite o valor da base de um triangulo: \n");
    scanf("%lf", &base);

    printf("Digite o valor da altura de um triangulo: \n");
    scanf("%f", &altura); 

    area = (base * altura) / 2; 

    printf("A area do triangulo e: %.2f", area); 



}
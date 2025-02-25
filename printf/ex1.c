#include <stdio.h>

#define PI 3.14159

int main(){
    float area, raio;

    printf("Digite o raio da circunferencia: \n");
    scanf("%f", &raio);

    area = PI * (raio * raio);

    printf("A area da circunferencia e: %.2f", area);


}
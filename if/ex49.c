/*
49. Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos 
lados de um triângulo, e se forem, verificar se é um triângulo equilátero, isóscele 
ou escaleno. Se eles não formarem um triângulo, escrever uma mensagem. 
Antes da elaboração do algoritmo, torna-se necessário a revisão de algumas 
propriedades e definições. 
Propriedade – o comprimento de cada lado de um triângulo é menor do que a 
soma dos comprimentos dos outros dois lados. 
Definição 1 - chama-se de triângulo equilátero o que tem os comprimentos dos 
três lados iguais; 
Definição 2 - chama-se de triângulo isóscele o triângulo que tem os 
comprimentos de dois lados iguais; 
Definição 3 - chama-se triângulo escaleno o triângulo que tem os 
comprimentos dos três lados diferentes. 

ENTRADA: os valores de x, y e z
PROCESSAMENTO: verificar se formam um triangulo 
SAIDA: o tipo de triangulo formado 
*/

#include <stdio.h>

int main(){
    float X = 0;
    float Y = 0;
    float Z = 0;

    printf("Digite o comprimento do lado X: \n");
    scanf("%f", &X);

    printf("Digite o comprimento do lado Y: \n");
    scanf("%f", &Y);

    printf("Digite o comprimento do lado Z: \n");
    scanf("%f", &Z);

    if(X <= 0 || Y <= 0 || Z <= 0){
        printf("Os valores fornecidos tem que ser positivos!\n");
    } else if(X < (Y + Z) && Y < (X + Z) && Z < (X + Y)){
        if(X == Y && Y == Z){
            printf("Triangulo equilatero: todos os lados sao iguais.\n");
        } else if(X == Y || Y == Z || X == Z){
            printf("Triangulo isosceles: dois lados sao iguais.\n");
        } else {
            printf("Triangulo escaleno: todos os lados sao diferentes.\n");
        }
    } else {
        printf("Os valores fornecidos nao podem formar um triangulo!\n");
    }

}
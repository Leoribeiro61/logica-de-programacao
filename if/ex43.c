/*
43. Uma empresa irá dar um aumento de salário aos seus funcionários de acordo
com a categoria de cada empregado. O aumento seguirá a seguinte regra:
• Funcionários das categorias A, C, F, e H ganharão 10% de aumento sobre o
salário;
• Funcionários das categorias B, D, E, I, J e T ganharão 15% de aumento sobre
o salário;
• Funcionários das categorias K e R ganharão 25% de aumento sobre o salário;
• Funcionários das categorias L, M, N, O, P, Q e S ganharão 35% de aumento
sobre o salário;
• Funcionários das categorias U, V, X, Y, W e Z ganharão 50% de aumento
sobre o salário.
Faça um algoritmo que escreva nome, categoria e salário reajustado de cada
empregado. 

ENTRADA: nome, categoria e salario 
PROCESSAMENTO: calcular a quantidade de aumento de cada funcionario
SAIDA: salario reajustado de cada empregado
*/

int main(){
    char nome[50];
    char categoria;
    float salario = 0;
    float salarioReajustado = 0;

    printf("Digite o nome do funcionario: \n");
    scanf("%s", nome);

    printf("Digite a categoria do funcionario (A, B, C, D...): \n");
    scanf(" %c", &categoria);

    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salario);

    if(categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H'){
        salarioReajustado = salario + (salario * 0.10);
    } 
    else if(categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T'){
        salarioReajustado = salario + (salario * 0.15);
    } 
    else if(categoria == 'K' || categoria == 'R'){
        salarioReajustado = salario + (salario * 0.25);
    } 
    else if(categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q' || categoria == 'S'){
        salarioReajustado = salario + (salario * 0.35);
    } 
    else if(categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Y' || categoria == 'W' || categoria == 'Z'){
        salarioReajustado = salario + (salario * 0.50);
    } 
    else {
        printf("Entrada invalida!!");
    }

    printf("Nome do funcionario: %s\n", nome);
    printf("Categoria: %c\n", categoria);
    printf("Salario reajustado do funcionario: %.2f", salarioReajustado);

}
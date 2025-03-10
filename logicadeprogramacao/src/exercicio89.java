/*
89. Construa um Algoritmo que, para um grupo de 50 valores inteiros, determine:
a) A soma dos números positivos;
b) A quantidade de valores negativos;

ENTRADA:
PROCESSAMENTO:
SAIDA:
 */

import java.util.Scanner;

public class exercicio89 {
    public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);

    int somaPositivos = 0;
    int qtdNegativos = 0;

    for(int i = 0; i < 50; i++){
        System.out.println("Digite o " + (i + 1) + "º valor: ");
        int valor = scanner.nextInt();

        if(valor > 0){
            somaPositivos += valor;
        } else if(valor < 0){
            qtdNegativos++;
        }
    }

        System.out.println("A soma dos números positivos é: "+ somaPositivos);
        System.out.println("A quantidade de numeros negativos são: "+ qtdNegativos);



    }
}

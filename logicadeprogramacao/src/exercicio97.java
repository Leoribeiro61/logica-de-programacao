/*
97. Faça um algoritmo que leia um número e imprima a sua tabela de multiplicação
de 1 até 13.

ENTRADA:
PROCESSAMENTO:
SAIDA:
 */

import java.util.Scanner;

public class exercicio97 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite um número para saber a sua tabela de multiplicação: ");
        int numero = scanner.nextInt();

        for(int i = 1; i <= 13; i++){
            int resultado = numero * i;
            System.out.println(numero + " X " + i + " = " + resultado);
        }
    }
}

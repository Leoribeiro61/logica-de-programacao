/*
91. Faça um algoritmo que imprima todos os números pares compreendidos entre
85 e 907. O algoritmo deve também calcular a soma destes valores.

ENTRADA:
PROCESSAMENTO:
SAIDA:

 */

public class exercicio91 {
    public static void main(String[] args){
        int soma = 0;

        for(int i = 86; i < 907; i += 2){
            System.out.println(i);
            soma += i;
        }

        System.out.println("A soma dos números pares é: " + soma);
    }
}

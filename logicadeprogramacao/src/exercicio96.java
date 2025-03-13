/*
96. Escreva um algoritmo que calcule o produto dos inteiros ímpares de 1 a 15 e,
então, exiba os resultados.
 */

public class exercicio96 {
    public static void main (String[] args){

        int produto = 1;

        for(int i = 1; i <= 15; i++){

            if(i % 2 != 0){
                produto *= i;
                System.out.println("Multiplicando por " + i + ", produto parcial = " + produto);
            }
        }

        System.out.println("O produto de todos os números ímpares de 1 a 15 é: " + produto);
    }
}

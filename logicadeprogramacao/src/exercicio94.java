/*
94. Dado o conjunto de instruções a seguir, faça um algoritmo com quatro variações,
colocando o comando de repetição adequadamente, de forma a:
a) Executar o conjunto 10 vezes;
b) Não executar nenhuma vez;
c) Executar o conjunto 100 vezes utilizando duas estruturas de repetição;
d) Executar N vezes, onde N é uma variável informada pelo usuário.
- Ler A, B
- Modulo = A mod B (calcula o resto da divisão

ENTRADA:
PROCESSAMENTO:
SAIDA:

 */

import java.util.Scanner;

public class exercicio94 {
    public static void main (String[] args){
        Scanner scanner = new Scanner(System.in);

        int a = 0;
        int b = 0;
        int n = 0;

        System.out.println("Digite o valor de 'A': ");
        a = scanner.nextInt();

        System.out.println("Digite o valor de 'B': ");
        b = scanner.nextInt();

        //executar 10 vezes
        for(int i = 0; i < 10; i++){
            int modulo = a % b;
            System.out.println("A mod B: " + modulo);
        }

        System.out.println("Digite o valor de 'A': ");
        a = scanner.nextInt();

        System.out.println("Digite o valor de 'B': ");
        b = scanner.nextInt();

        // Não executar nenhuma vez
        for(int i = 0; i < 0; i++){
            int modulo = a % b;
            System.out.println("A mod B: " + modulo);
        }

        System.out.println("Digite o valor de 'A': ");
        a = scanner.nextInt();

        System.out.println("Digite o valor de 'B': ");
        b = scanner.nextInt();


        for(int i = 0; i < 10; i++){
            int j = 0;
            while (j < 10){
                int modulo = a % b;
                System.out.println("A mod B: " + modulo);
                j++;
            }
        }

        System.out.println("Digite o valor de 'A': ");
        a = scanner.nextInt();

        System.out.println("Digite o valor de 'B': ");
        b = scanner.nextInt();

        System.out.println("Digite o valor de 'N', (Número de repetições): ");
        n = scanner.nextInt();

        for(int i = 0; i < n; i++){
            int modulo = a % b;
            System.out.println("A mod B: " + modulo);
        }
    }
}

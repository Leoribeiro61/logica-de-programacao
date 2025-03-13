/*
95.Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.

ENTRADA:
PROCESSAMENTO:
SAIDA:

 */

import java.util.Scanner;

public class exercicio95 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        int totalAlunos = 45;
        int menosDe170 = 0;
        int maisDe20 = 0;
        //int i = 1;

        for(int i = 0; i <= totalAlunos; i++){
            System.out.println("Digite os dados do aluno " + i + ":");
            System.out.print("Idade: ");
            int idade = scanner.nextInt();
            System.out.print("Digite a altura (em metros): ");
            double altura = scanner.nextDouble();
        }

       /* if(altura < 1.70){
        }

*/



        /*while( i <= 10){
            System.out.println(i);
            i++;
        }*/
    }
}

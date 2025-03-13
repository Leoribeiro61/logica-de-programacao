import java.util.Scanner;

public class Leitor {

    public static String lerString(){
        return new Scanner(System.in).nextLine();
    }

    public static String lerString(String msg){
        System.out.println(msg);
        return lerString();
    }

    public static Boolean lerBoolean(){
        //String resposta;
        while(true){

        }



    }

    public static Aluno lerAluno(){
        Aluno aluno = new Aluno();
        aluno.nome = lerString("Informe o nome do aluno: ");
        aluno.matricula = lerString("Informe a matricula do aluno: ");
        aluno.bolsista = lerBoolean("O aluno é bolsista ou regular? ");
        return aluno;
    }
}

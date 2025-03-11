/*
93. Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria
qualquer preço. O monge, necessitando de alimentos, indagou à rainha sobre o
pagamento, se poderia ser feito com grãos de trigo dispostos em um tabuleiro de
xadrez (que possui 64 casas), de tal forma que o primeiro quadro deveria conter
apenas um grão e os quadros subsequentes, o dobro do quadro anterior. Crie um
algoritmo para calcular o total de grãos que o monge recebeu.

ENTRADA:
PROCESSAMENTO:
SAIDA:

 */

public class exercicio93 {
    public static void main (String[] args){
        long totalGraos = 0;
        long graosPorCasa = 1;

        for(int i = 1; i <= 64; i++){
            totalGraos += graosPorCasa;
            graosPorCasa *= 2;
        }
        System.out.println("Total de grãos de trigo: " +totalGraos);
    }
}

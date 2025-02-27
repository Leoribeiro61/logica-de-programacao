<<<<<<< HEAD
/*
45. Escreva um algoritmo que, para uma conta bancária, leia o seu número, o saldo,
o tipo de operação a ser realizada (depósito ou retirada) e o valor da operação.
Após, determine e mostre o novo saldo. Se o novo saldo ficar negativo, deve ser
mostrada, também, a mensagem “conta estourada”.

ENTRADA:  numero da conta, saldo, e o tipo de operação a ser realizada e o valor.
PROCESSAMENTO: somar ou subtrair o valor que foi depositado ou retido 
SAIDA: o saldo atual da conta 
*/

int main(){
    int numeroConta = 0;
    float saldo = 0;
    float valorOperacao = 0;
    float novoSaldo = 0;
    char operacao; 

    printf("Digite o numero da conta: \n");
    scanf("%d", &numeroConta); 

    printf("Digite o saldo da conta: \n");
    scanf("%f", &saldo);

    printf("Digite o tipo de operacao ('D' para deposito e 'R' para retirada): \n");
    scanf(" %c", &operacao);

    printf("DIgite o valor da operacao: \n");
    scanf("%f", &valorOperacao);

    if(operacao == 'D' || operacao == 'd'){
        novoSaldo = saldo + valorOperacao;
    } else if (operacao == 'R' || operacao == 'r'){
        novoSaldo = saldo - valorOperacao;
    } else{
        printf("Entrada invalida!!\n");
    }

    printf("O valor do novo saldo e: %.2f", novoSaldo);

    if(novoSaldo < 0){
        printf("Conta eutourada!"); 
    }


=======
/*
45. Escreva um algoritmo que, para uma conta bancária, leia o seu número, o saldo,
o tipo de operação a ser realizada (depósito ou retirada) e o valor da operação.
Após, determine e mostre o novo saldo. Se o novo saldo ficar negativo, deve ser
mostrada, também, a mensagem “conta estourada”.

ENTRADA:  numero da conta, saldo, e o tipo de operação a ser realizada e o valor.
PROCESSAMENTO: somar ou subtrair o valor que foi depositado ou retido 
SAIDA: o saldo atual da conta 
*/

int main(){
    int numeroConta = 0;
    float saldo = 0;
    float valorOperacao = 0;
    float novoSaldo = 0;
    char operacao; 

    printf("Digite o numero da conta: \n");
    scanf("%d", &numeroConta); 

    printf("Digite o saldo da conta: \n");
    scanf("%f", &saldo);

    printf("Digite o tipo de operacao ('D' para deposito e 'R' para retirada): \n");
    scanf(" %c", &operacao);

    printf("DIgite o valor da operacao: \n");
    scanf("%f", &valorOperacao);

    if(operacao == 'D' || operacao == 'd'){
        novoSaldo = saldo + valorOperacao;
    } else if (operacao == 'R' || operacao == 'r'){
        novoSaldo = saldo - valorOperacao;
    } else{
        printf("Entrada invalida!!\n");
    }

    printf("O valor do novo saldo e: %.2f", novoSaldo);

    if(novoSaldo < 0){
        printf("Conta eutourada!"); 
    }


>>>>>>> d75d9d1aa9c0bf8d6750bf52ea6c2b2f0bc592a3
}
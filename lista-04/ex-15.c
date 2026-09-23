// Escreva um programa que calcule o que deve ser pago por um produto, considerando o preço
// normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a 
// seguir para ler qual condição de pagamento escolhida e efetuar o cálculo adequado.

// Código | Condição de pagamento
// 1      | À vista em dinheiro ou cheque, recebe 10% de desconto
// 2      | À vista no cartão de crédito, recebe 5% de desconto   
// 3      | Em 2 vezes, preço normal de etiqueta sem juros 
// 4      | Em 3 vezes, preço normal de etiqueta mais juros de 10%

#include <stdio.h>

int main(){
    int codigo;
    double preco;

    printf("Digite o preço do produto: ");
    scanf("%lf", &preco);
    printf("Digite o código da condição de pagamento: ");
    scanf("%d", &codigo);

    if (codigo == 1){
        printf("O valor a ser pago é: R$%.2lf", preco - (preco * 0.10));
    } else if (codigo == 2){
        printf("O valor a ser pago é: %.2lf", preco - (preco * 0.05));
    } else if (codigo == 3){
        printf("O valor a ser pago é: 2x R$%.2lf", preco/2);
    } else if (codigo == 4){
        printf("O valor a ser pago é: 3x R$%.2lf", (preco + (preco * 0.10))/3);
    } else {
        printf("Código de pagamento inválido.");
    }
    return 0;
}
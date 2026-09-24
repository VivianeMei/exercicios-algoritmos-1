// Uma empresa decide dar um aumento de 13% aos funcionários cujo salário é inferior a
// R$840,00. Escreva um programa que receba o salário de um funcionário e imprima o valor do
// salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento.

#include <stdio.h>

int main() {
    float salario;

    scanf("%f", &salario);

    if (salario < 840) {
        salario = salario + (salario * 0.13);
        printf ("Salário reajustado: R$%.2f", salario);
    }
    else {
        printf("Funcionário não tem direito ao aumento.");
    }
}
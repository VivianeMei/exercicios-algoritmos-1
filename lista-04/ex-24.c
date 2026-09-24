// Faça um programa que calcule e imprima o salário reajustado de um funcionário de acordo
// com a seguinte regra:
// Salários até R$1.350,00, reajuste de 25,5%.
// Salários maiores que R$1.350,00, reajuste de 12,25%.

#include <stdio.h>

int main() {
    double salario;

    scanf("%lf", &salario);

    if (salario <= 1350) {
        salario = salario + (salario * 0.255);
        printf("Salário reajustado: R$%.2lf", salario);
    }
    else {
        salario = salario + (salario * 0.1225);
        printf("Salário reajustado: R$%.2lf", salario);
    }
}
// Escreva um programa que leia o código de um determinado produto e mostre a sua 
// classificação. Utilize a tabela abaixo como referência:

//       Código          |      Classificação
// 1                     | Alimento não-perecível
// 2, 3 ou 4             | Alimento perecível
// 5 ou 6                | Vestuário
// 7                     | Higiene pessoal
// 8 até 15              | Limpeza e utensílios domésticos
// Qualquer outro código | Inválido

#include <stdio.h>

int main(){
    int codigo;

    scanf("%d", &codigo);

    if (codigo == 1){
        printf("Alimento não-perecível");
    } else if (codigo == 2 || codigo == 3 || codigo == 4){
        printf("Alimento perecível");
    } else if (codigo == 5 || codigo == 6){
        printf("Vestuário");
    } else if (codigo == 7){
        printf("Higiene pessoal");
    } else if (codigo >= 8 && codigo <= 15){
        printf("Limpeza e utensílios domésticos");
    } else {
        printf("Inválido");
    }
    return 0;
}
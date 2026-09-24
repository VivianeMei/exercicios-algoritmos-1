// Faça um programa que receba a idade de uma pessoa e classifique-a seguindo o critério a seguir:

//       Idade       |   Classificação
//     0 a 2 anos    |   Recém-nascido
//     3 a 11 anos   |   Criança
//     12 a 19 anos  |   Adolescente
//     20 a 55 anos  |   Adulto
//  Acima de 55 anos |   Idoso


#include <stdio.h>

int main(){
    int idade;

    scanf("%d", &idade);

    if (idade >= 0 && idade <= 2)
        printf("Recém-nascido");
    else if (idade >= 3 && idade <= 11)
        printf("Criança");
    else if (idade >= 12 && idade <= 19)
        printf("Adolescente");
    else if (idade >= 20 && idade <= 55)
        printf("Adulto");
    else if (idade > 55)
        printf("Idoso");
}
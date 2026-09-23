// Escreva um programa que receba o código correspondente ao cargo de um funcionário e 
// imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito seguindo a
// tabela a seguir:

// Código  |      Cargo      | Percentual
// 1       | Escriturário    | 60%
// 2       | Secretário      | 40%
// 3       | Caixa           | 25%
// 4       | Gerente         | 5%
// 5       | Diretor         | Não tem aumento

#include <stdio.h>

int main(){
    int codigo;

    scanf("%d", &codigo);

    if (codigo == 1){
        printf("Escriturário - 60%%");
    } else if (codigo == 2){
        printf("Secretário - 40%%");
    } else if (codigo == 3){
        printf("Caixa - 25%%");
    } else if (codigo == 4){
        printf("Gerente - 5%%");
    } else if (codigo == 5){
        printf("Diretor - Não tem aumento");
    } else {
        printf("Código inválido");
    }
}
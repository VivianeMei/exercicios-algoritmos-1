// Faça um programa que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
// a) o peso dessa pessoa em gramas;
// b) se essa pessoa engordar 5%, qual será seu novo peso em gramas.

#include <stdio.h>

int main(){
    int peso;
    float pesogramas, novopeso;

    scanf("%d", &peso);

    // a)
    pesogramas = peso*1000;
    printf("\n%.1f g", pesogramas);

    // b)
    novopeso = (peso * 1.05) * 1000 ;
    printf("\n%.1f g", novopeso);
}
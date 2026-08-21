// Faça um programa que, dado um número inteiro, verifique se este número é par.

#include <stdio.h>

int main(){
    int a;

    scanf("%d", &a);

    if (a%2 == 0)
        printf("par");
    else
        printf("impar");
}
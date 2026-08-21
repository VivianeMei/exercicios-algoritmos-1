// Faça um programa que leia três valores inteiros, determine e imprima o menor deles.

#include <stdio.h>

int main(){
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (A < B && A < C)
        printf("%d", A);
    else if (B < A && B < C)
        printf("%d", B);
    else
        printf("%d", C);

}
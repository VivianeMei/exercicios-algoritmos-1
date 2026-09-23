// Dados três valores (x,y,z), verifique se eles podem ser comprimentos dos lados de um triângulo, e caso afirmativo, 
// verificar se o triângulo é equilátero, isósceles ou escaleno. Se não puderem formar um triângulo, escreva uma mensagem.

// Propriedade: O comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.

// Definição 1: Chama-se triângulo equilátero ao triângulo que tem os comprimentos dos três lados iguais.
// Definição 2: Chama-se triângulo isósceles ao triângulo que tem os comprimentos de dois lados iguais.
// Definição 3: Chama-se triângulo escaleno ao triângulo que tem os comprimentos de seus três lados diferentes.

#include <stdio.h>

int main(){
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    if (x<y+z && y<x+z && z<x+y){
        if (x==y && y==z && z==x){
            printf("Triângulo Equilátero");
        } else if (x==y || y==z || z==x){
            printf("Triângulo Isósceles");
        } else {
            printf("Triângulo Escaleno");
        }
    } else {
        printf("Não é possível formar um triângulo");
    }  
}
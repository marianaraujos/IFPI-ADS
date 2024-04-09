// 10. Leia 2 números inteiros, calcule e escreva o quociente e o resto da divisão do 1o pelo 2o.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    // Entrada
    int num1;
    int num2;

    printf("Digite um numero A:");
    scanf("%d", &num1);
    printf("Digite um numero B:");
    scanf("%d", &num2);

    // Processamento 
    float quociente = floor(num1/num2);
    float resto = (num1%num2);

    // Saída
    printf("O quociente eh %1.f e resto eh %1.f.", quociente, resto);

    return 0;
}
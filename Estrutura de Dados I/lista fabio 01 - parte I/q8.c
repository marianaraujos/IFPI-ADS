// 8. Leia 2 números, calcule e escreva a divisão da soma pela subtração dos números lidos.

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Entrada
    int num1;
    int num2;

    printf("Digite um numero A:");
    scanf("%d", &num1);
    printf("Digite um numero B:");
    scanf("%d", &num2);
    // Process: (A+B)/abs(A-B)
    // 5+7/5-7 => 12/2

    // Processamento 
    int sum = num1 + num2;
    float diff = abs(num1 - num2);
    float calculo = (sum/diff);

    // Saída
    printf("O resultado eh: %2.f!", calculo);

    return 0;
}


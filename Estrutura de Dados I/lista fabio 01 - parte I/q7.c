// 7. Leia 3 números, calcule e escreva a soma dos 2 primeiros e a diferença entre os 2 últimos.

#include <stdio.h>
#include <math.h>

int main(){
    // Entrada 
    int num1;
    int num2;
    int num3;

    printf("Digite o numero1:");
    scanf("%d", &num1);
    printf("Digite o numero2:");
    scanf("%d", &num2);
    printf("Digite o numero3:");
    scanf("%d", &num3);
    
    // Processamento
    int sum = num1 + num2;
    float diff = abs(num2 - num3);

    // Saída
    printf("A soma dos dois primeiros numeros equivale a %d pontos e os dois ultimos tem uma diferença de %f pontos.", sum, diff);

    return 0;
}

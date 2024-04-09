// 18. Leia o valor do raio de uma circunferência, calcule e escreva seu comprimento.(c = 2 * p * r)

#include <stdio.h>

int main(){
    // Entrada
    float pi = 3.14;
    float raio;

    printf("Digite o valor do raio da circunferencia em cm:");
    scanf("%f", &raio);

    // Processamento 
    float comprimento_circunferencia = (2 * pi * raio);

    // Saída
    printf("O comprimento da circunferencia eh de %1.2f cm.", comprimento_circunferencia);

    return 0;
}

// 16. Leia o valor do lado de um quadrado, calcule e escreva sua área. (área = lado2)

#include <stdio.h>

int main(){   
    // Entrada
    float lado; 
    printf("Digite o valor do lado do quadrado em cm:");
    scanf("%f", &lado);

    // Processamento 
    float area = (lado * lado);

    // Saída
    printf("A area do quadrado eh de: %1.3f cm^2.", area);

    return 0;
}
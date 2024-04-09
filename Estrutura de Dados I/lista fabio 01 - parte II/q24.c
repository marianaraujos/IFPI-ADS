// 24. Leia um valor em m, calcule e escreva o equivalente em cm.

#include <stdio.h>

int main(){
    // Entrada
    float valor_metros;
    printf("Digite um valor em metros:");
    scanf("%f", &valor_metros);

    // Processamento 
    float equivalente_em_cm = (valor_metros * 100);

    // Saída
    printf("O valor inicial %1.1f em metros, equivale a %1.2f em centimetros.", valor_metros, equivalente_em_cm);

    return 0;
}

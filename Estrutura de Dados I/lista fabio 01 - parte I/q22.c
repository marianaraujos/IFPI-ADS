// 22. Leia um valor em km, calcule e escreva o equivalente em m.
#include <stdio.h>

int main(){
    // Entrada
    float valor_km;
    printf("Digite um valor em km:");
    scanf("%f", &valor_km);

    // Processamento 
    float equivalente_em_metros = (valor_km * 1000);

    // Saída
    printf("O valor inicial %1.1f em quilometros, equivale a %1.1f em metros.", valor_km, equivalente_em_metros);

    return 0;
}

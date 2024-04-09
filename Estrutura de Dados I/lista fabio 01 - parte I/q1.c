// 1. Leia uma velocidade em m/s, calcule e escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6)

#include <stdio.h>

int main(){
    // Entrada
    int velocidade_ms;
    // Processamento
    printf("Digite uma velocidade em m/s:");
    scanf("%d", &velocidade_ms);
    // Calculo
    int velocidade_kmh = (velocidade_ms * 3.6);
    // Saída
    printf("A velocidade digitada em Vkm/h eh: %d.\n", velocidade_kmh);

    return 0;
}
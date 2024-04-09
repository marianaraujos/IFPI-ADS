// 6. Leia uma velocidade em km/h, calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6)

#include <stdio.h>

int main(){
    // Entrada
    float velocidade_kmh;
    // Processamento
    printf("Digite uma velocidade em Km/h:");
    scanf("%f", &velocidade_kmh);
    // Calculo
    float velocidade_ms = (velocidade_kmh / 3.6);
    // Saída
    printf("A velocidade digitada em m/s eh: %f.\n", velocidade_ms);

    return 0;
}
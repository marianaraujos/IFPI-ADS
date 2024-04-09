// 19. Leia o valor do raio de uma esfera, calcule e escreva seu volume. (v = (4 * p * r3) / 3) (p = 3,14)

#include <stdio.h>

int main(){
    // Entrada
    float pi = 3.14;
    float raio;
    printf("Digite o valor do raio da esfera em cm:");
    scanf("%f", &raio);

    // Processamento 
    float volume_esfera = ((4 * pi * (raio*raio*raio)) / 3);

    // Saída
    printf("O volume da esfera eh de:\n %1.3f cm^3.", volume_esfera);

    return 0;
}
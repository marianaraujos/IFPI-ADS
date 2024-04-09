// 17. Leia o valor da base e altura de um retângulo, calcule e escreva sua área. (área = base * altura)
#include <stdio.h>

int main(){
    // Entrada
    float base; 
    float altura; 

    printf("Digite o valor da base do retangulo em cm:");
    scanf("%f", &base);
    printf("Digite o valor da altura do retangulo em cm:");
    scanf("%f", &altura);

    // Processamento 
    float area = (base * altura);

    // Saída
    printf("A area do retangulo eh de %1.2f cm^2.", area);

    return 0;
}

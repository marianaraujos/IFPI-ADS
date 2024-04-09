// 15. Leia o valor da base e altura de um triângulo, calcule e escreva sua área. (área=(base * altura)/2)

#include <stdio.h>

int main(){
    // Entrada
    float base; 
    float altura; 

    printf("Digite o valor da base do triangulo em cm:");
    scanf("%f", &base);
    printf("Digite o valor da altura do triangulo em cm:");
    scanf("%f", &altura);

    // Processamento 
    float area = ((base * altura)/2);

    // Saída
    printf(" A area do triangulo eh de %1.2f cm^2. ", area);

    return 0;
}

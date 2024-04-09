// 23. Leia um valor em kg (quilograma), calcule e escreva o equivalente em g (grama).
#include <stdio.h>
int main(){
    // Entrada
    float valor_kg;
    printf("Digite um valor em kg:");
    scanf("%f", &valor_kg);

    // Processamento 
    float equivalente_em_gramas = (valor_kg * 1000);

    // Saída
    printf("O valor inicial %1.2f em kg, equivale a %1.2f em gramas.", valor_kg, equivalente_em_gramas);

    return 0;
}
// 13. Leia um valor em real (R$), calcule e escreva 70% deste valor.

#include <stdio.h>

int main(){
    // Entrada
    float valor_inicial;
    printf("Digite um valor em R$:");
    scanf("%f", &valor_inicial);

    // Processamento
    float calcular_porcentagem = (valor_inicial * 0.70);
    float valor_atualizado = (valor_inicial - calcular_porcentagem);

    // Saída
    printf("O valor atualizado eh: R$ %1.2f!", valor_atualizado);

    return 0;
}
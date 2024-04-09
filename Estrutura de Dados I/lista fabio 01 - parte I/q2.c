// 2. Leia um valor em horas e um valor em minutos, calcule e escreva o equivalente em minutos.

#include <stdio.h>

int main(){
    // Entrada
    int valor_horas;
    int valor_min;
    // Processamento
    printf("Digite um valor em horas:");
    scanf("%d", &valor_horas);
    printf("Digite um valor em minutos:");
    scanf("%d", &valor_min);
    printf("O valor digitado foi de %d horas e %d minutos.\nQue sera convertido em apenas minutos em breve...\n", valor_horas, valor_min);
    // Cálculo
    int calcular_horario_total = ((valor_horas * 60) + valor_min);
    // Saída
    printf("O valor total de minutos eh de: %d minutos!", calcular_horario_total);

    return 0;
}
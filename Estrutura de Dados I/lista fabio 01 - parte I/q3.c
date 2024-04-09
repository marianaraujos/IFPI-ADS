// 3. Leia um valor em minutos, calcule e escreva o equivalente em horas e minutos.
#include <stdio.h>
#include <math.h>

int main(){
    // Entrada
    int minutos_totais_inicial;
    // Processamento
    printf("Digite um valor em minutos:\n");
    scanf("%d", &minutos_totais_inicial);
    // Cálculo:
    float horas = floor(minutos_totais_inicial/60);
    int minutos = (minutos_totais_inicial % 60);
    // Saída
    printf("Seu valor em horas eh: %1.f horas e %d minutos.", horas, minutos);

    return 0;
}


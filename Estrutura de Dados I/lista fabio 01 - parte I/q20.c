// 20. Leia uma temperatura em °C, calcule e escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5)
#include <stdio.h>
int main(){
    // Entrada
    float temperatura_celsius;
    printf("Digite uma temperatura em Celsius:");
    scanf("%f", &temperatura_celsius);

    // Processamento 
    float calculando_para_fahrenheit = (((9 * temperatura_celsius) + 160) / 5);

    // Saída
    printf("A temperatura equivalente de Celsius para Fahrenheit eh de: \n %1.2f Fahrenheit.", calculando_para_fahrenheit);

    return 0;
}
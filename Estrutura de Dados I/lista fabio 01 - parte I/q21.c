// 21. Leia uma temperatura em °F, calcule e escreva a equivalente em °C. (t°C = (5 * t°F - 160) / 9).
#include <stdio.h>
int main(){
    // Entrada
    float temperatura_fahrenheit; 
    printf("Digite uma temperatura em Fahrenheit:\n");
    scanf("%f", &temperatura_fahrenheit);

    // Processamento 
    float calculando_para_celsius = (((5 * temperatura_fahrenheit) - 160) / 9);

    // Saída
    printf("A temperatura equivalente de Fahrenheit para Celsius eh de:\n %1.2f Celsius.", calculando_para_celsius);

    return 0;
}

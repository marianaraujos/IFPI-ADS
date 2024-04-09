// 28. Leia um número inteiro de horas, calcule e escreva quantas semanas, quantos dias e quantas horas ele
// corresponde.
#include <stdio.h>
#include <math.h>

int main(){
    // Entrada
    int numero_horas;
    printf("Digite um numero de horas:");
    scanf("%d", &numero_horas);

    // Processamento
    int semanas = floor(numero_horas/168);
    int resto_semanas = (numero_horas%168);
    int dias = floor(resto_semanas/24);
    int horas = (resto_semanas % 24);

    // Saída
    printf("Há %d semana(s), %d dia(s) e %d horas(s).", semanas, dias, horas);

    return 0;
}
// 30. Leia um número inteiro de minutos, calcule e escreva quantos dias, quantas horas e quantos minutos ele
// corresponde.

#include <stdio.h>
#include <math.h>

int main(){
    // Entrada
    int numero_minutos;
    printf("Digite um numero de minutos:");
    scanf("%d", &numero_minutos);

    // Processamento
    int dias = floor(numero_minutos/1440); 
    int resto_dias = (numero_minutos%1440);
    int horas = floor(resto_dias/60); 
    int minutos = (resto_dias % 60);

    // Saída
    printf("Tem %d dia(s), %d hora(s) e %d minuto(s).", dias, horas, minutos);

    return 0;
}
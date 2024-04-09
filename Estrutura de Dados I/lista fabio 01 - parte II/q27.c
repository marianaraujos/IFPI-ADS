// 27. Leia um número inteiro de segundos, calcule e escreva quantas horas, quantos minutos e quantos
// segundos ele corresponde.

#include <stdio.h>
#include <math.h>

int main(){
    // Entrada
    int numero_segundos; 
    printf("Digite um numero de segundos:");
    scanf("%d", &numero_segundos);

    // Processamento
    int horas = floor(numero_segundos/3600);
    int resto_horas = (numero_segundos%3600);
    int minutos = floor(resto_horas/60);
    int segundos = (resto_horas % 60);

    // Saída
    printf("Tem %d hora(s), %d minuto(s) e %d segundo(s).", horas, minutos, segundos);

    return 0;
}

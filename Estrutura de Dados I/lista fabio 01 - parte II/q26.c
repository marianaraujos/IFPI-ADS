// 26. Leia um número inteiro de dias, calcule e escreva quantas semanas e quantos dias ele corresponde.

#include <stdio.h>
#include <math.h>

int main(){
    // Entrada
    int numero_dias;
    printf("Digite um numero de dias:");
    scanf("%d", &numero_dias);

    // Processamento
    int semanas = floor(numero_dias/7); 
    int dias = (numero_dias % 7);

    // Saída
    printf(" Tem %d semana(s) e %d dia(s).", semanas, dias);  

    return 0;
}

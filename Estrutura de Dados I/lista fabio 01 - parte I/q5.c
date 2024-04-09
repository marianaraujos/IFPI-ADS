#include <stdio.h>
#include <math.h>

// 5. Leia um número inteiro (3 dígitos), calcule e escreva a soma de seus elementos (C + D + U).

int main(){
    // Entrada
    int numero;
    // Processamento
    printf("Digite um numero de tres digitos:"); // 537
    scanf("%d", &numero);

    int centenas = floor(numero/100); // 5 !!!!!!!!
    int resto_centenas = (numero%100); // 37
    int dezenas = floor(resto_centenas/10); // 3 !!!!!
    int unidades = (resto_centenas % 10); // 7

    // Cálculo 
    int soma = (centenas + dezenas + unidades);

    // Saída
    printf("O resultado eh: %d", soma);

    return 0;
}
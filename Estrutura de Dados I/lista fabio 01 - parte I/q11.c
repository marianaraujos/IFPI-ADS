// 11. Leia um número inteiro (3 dígitos) e escreva o inverso do número. (Ex.: número = 532 ; inverso = 235)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // Entrada 
    int numero;
    printf("Digite um numero inteiro de 3 digitos:");
    scanf("%d", &numero);
    
    // Processamento 
    int centenas = trunc(numero/100);
    int resto_centenas = (numero%100);
    int dezenas = trunc(resto_centenas/10); 
    int unidades = (resto_centenas % 10);

    // Saída 
    printf("O numero digitado foi %d e o seu inverso eh (%d%d%d).", numero, unidades, dezenas,centenas);

    return 0;
}
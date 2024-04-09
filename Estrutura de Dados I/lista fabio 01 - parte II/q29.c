// 29. Leia um número inteiro de meses, calcule e escreva quantos anos e quantos meses ele corresponde.
#include <stdio.h>
#include <math.h>

int main(){
    // Entrada
    int numero_meses;
    printf("Digite um numero de meses:"); 
    scanf("%d", &numero_meses);

    // Processamento
    int anos = floor(numero_meses/12);
    int meses = (numero_meses%12);

    // Saída
    printf("Tem %d ano(s) e %d mes(es).", anos,meses);

    return 0;
}

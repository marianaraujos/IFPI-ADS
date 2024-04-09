//38. Leia 2 (duas) frações (numerador e denominador), calcule e escreva a soma destas frações, escrevendo o
// resultado em forma de fração.

#include <stdio.h>

int main(){
    // Entrada
    int numerador_1;
    printf("Digite o Numerador 1: ");
    scanf("%d", &numerador_1);

    int denominador_1;
    printf("Digite o Denominador 1: ");
    scanf("%d", &denominador_1);

    int numerador_2; 
    printf("Digite o Numerador 2: ");
    scanf("%d", &numerador_2);

    int denominador_2;
    printf("Digite o Denominador 2: ");
    scanf("%d", &denominador_2);

    // Processamento
    int denominador = (denominador_1 * denominador_2);
    int numerador = ((denominador/denominador_1)*numerador_1) + ((denominador/denominador_2)*numerador_2);

    // Saída
    printf("A soma é: %d/%d", numerador, denominador);

    return 0;
}

// 9. Leia 2 números (A, B) e escreva-os em ordem inversa (B, A).

#include <stdio.h>

int main(){
    // Entrada
    int numA;
    int numB;
    // Processamento
    printf("Digite um numero A:");
    scanf("%d", &numA);
    printf("Digite um numero B:");
    scanf("%d", &numB);
    // Saída
    printf("Os números que voce digitou foram (A,B) = (%d,%d)...", numA, numB);
    printf("Na ordem inversa ficam (B,A) = (%d,%d)!", numB, numA);

    return 0;
}
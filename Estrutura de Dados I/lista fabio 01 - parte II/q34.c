// 34. Leia 3 números, calcule e escreva a média dos números.
#include <stdio.h>
int main(){
    // Entrada
    int notaA; 
    printf("Digite a primeira nota:");
    scanf("%d", &notaA);

    int notaB; 
    printf("Digite a segunda nota:");
    scanf("%d", &notaB);

    int notaC; 
    printf("Digite a terceira nota:");
    scanf("%d", &notaC);

    // Processamento
    float media = ((notaA + notaB + notaC)/3);

    // Saída
    printf("A media eh: %1.2f!", media);


    return 0;
}

// 14. Leia 3 notas de um aluno e o peso de cada nota, calcule e escreva a média ponderada.

#include <stdio.h>

int main(){
    // Entrada
    float notaA; 
    float peso1;
    printf("Digite a primeira nota:");
    scanf("%f", &notaA);
    printf("Peso da 1a nota:");
    scanf("%f", &peso1);

    float notaB; 
    float peso2;
    printf("Digite a segunda nota:");
    scanf("%f", &notaB);
    printf("Peso da 2a nota:");
    scanf("%f", &peso2); 

    float notaC; 
    float peso3; 
    printf("Digite a terceira nota:");
    scanf("%f", &notaC);
    printf("Peso da 3a nota:");
    scanf("%f", &peso3);

    // Processamento
    float calcular_media = ((notaA * peso1) + ( notaB * peso2) + ( notaC * peso3)) / (peso1 + peso2 + peso3);

    // Saída
    printf("A media ponderada eh: %f", calcular_media);

    return 0;
}
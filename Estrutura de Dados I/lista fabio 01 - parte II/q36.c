// 36. Leia a idade de uma pessoa expressa em anos, meses e dias e escreva-a expressa apenas em dias.
#include <stdio.h>
int main(){
    //Entrada
    int anos; 
    printf("Digite a idade em anos:");
    scanf("%d", &anos);

    int meses;
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);

    int dias;
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    //Processamento
    int idade_em_anos = (anos * 365);
    int idade_em_meses = (meses * 30);
    int soma_idade_total = (idade_em_anos + idade_em_meses + dias);

    // Saída
    printf("A idade correspondente eh de %d dias!", soma_idade_total);

    return 0;
}

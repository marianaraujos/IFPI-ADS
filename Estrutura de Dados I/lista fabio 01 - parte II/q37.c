// 37. Leia a idade de uma pessoa expressa em dias e escreva-a expressa em anos, meses e dias.
// 1200 dias = 3 anos 3 meses 15 dias

#include <stdio.h>
#include <math.h>

int main(){
    // Entrada
    int idade_dias; 
    printf("Digite a idade em dias: ");
    scanf("%d", &idade_dias);

    //Processamento
    int anos = floor(idade_dias/365);
    int resto_de_anos = (idade_dias%365); //(o q sobrar vai virar meses)
    int meses = floor(resto_de_anos/30); // (numero de meses)
    int dias = (resto_de_anos%30);

    // Saída
    printf("Sao %d an(os), %d mes(es) e %d dias!", anos, meses, dias);

    return 0;
}

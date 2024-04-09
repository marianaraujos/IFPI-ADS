// 35. Leia um número inteiro (4 dígitos), calcule e escreva a soma dos elementos que o compõem. Ex.:
// número = 9534 ; soma = 9+5+3+4 = 21.

#include <stdio.h>
#include <math.h>

int main(){
    //Entrada
    int numero; 
    printf("Digite um numero inteiro de 4 digitos:"); // 4926 = 21
    scanf("%d", &numero);

    //Processamento
    int unidade_de_milhar = floor(numero / 1000); // 4!!!!!
    int resto_milhar = (numero % 1000); // 926

    int centena = floor(resto_milhar / 100); // 926/100 = 9!!!!
    int resto_centenas = (resto_milhar % 100); // 26

    int dezena = floor(resto_centenas / 10); // 26/10 = 2 !!!!!
    int unidade = (resto_centenas % 10); // 26%10 = 6 !!!!!

    int calculo = ( unidade_de_milhar +  centena + dezena + unidade );

    // Saída
    printf("Numero digitado foi %d e a soma de seus elementos eh %d!", numero, calculo);

    return 0;
}

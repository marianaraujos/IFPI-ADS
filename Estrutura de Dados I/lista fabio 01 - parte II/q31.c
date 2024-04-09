//31.Leia um número inteiro (4 dígitos binários), calcule e escreva o equivalente na base decimal.
#include <stdio.h>
#include <math.h>

int main(){
    //Entrada
    int numero;
    printf("Digite um numero inteiro de 4 digitos:");
    scanf("%d", &numero);

    //Processamento
    int unidade_de_milhar = floor(numero / 1000);
    int resto_milhar = (numero % 1000);

    int centena = floor(resto_milhar / 100);
    int resto_centenas = (resto_milhar % 100);

    int dezena = floor(resto_centenas / 10);
    int unidade = (resto_centenas % 10);

    // Convertendo para base decimal
    int decimal = (unidade * pow(2,0)) + (dezena * pow(2,1)) + (centena * pow(2,2)) + (unidade_de_milhar * pow(2,3));

    //Saída
    printf("O numero binario digitado convertido para base decimal eh %d", decimal);

    return 0;
}

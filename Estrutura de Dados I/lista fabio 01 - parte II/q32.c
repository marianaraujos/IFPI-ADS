// 32. Leia um número inteiro (3 dígitos), calcule e escreva a diferença entre o número e seu inverso.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    //Entrada
    int numero;
    printf("Digite um numero inteiro de 3 digitos: ");
    scanf("%d", &numero);
    
    //Processamento
    int centena = floor(numero / 100); // num inicial = 348 => 348/100 = 3
    int resto = (numero % 100); // 48
    int dezena = floor(resto / 10); // 48/10= 4
    int unidade = (resto % 10); // 48%10=8
    // montando o inverso
    int montando_inverso = (unidade * 100)+(dezena*10)+(centena*1); // 800 + 40 + 3 = 843
    // calculando diferença
    int diff = abs((numero - montando_inverso));

    // Saída
    printf("A diferenca eh de %d pontos!", diff);

    return 0;
    }

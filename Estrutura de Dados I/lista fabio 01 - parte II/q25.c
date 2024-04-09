// 25. Leia um número inteiro de metros, calcule e escreva quantos Km e quantos metros ele corresponde.

#include <stdio.h>
#include <math.h>

int main(){
    // Entrada
    float numero_metros;
    printf("Digite um numero de metros:"); 
    scanf("%f", &numero_metros);

    // Processamento
    int km = floor(numero_metros/1000);
    float metros = fmod(numero_metros,1000); // fmod = é a operação RESTO "%" quando se usa o tipo FLOAT

    // Saída
    printf("O numero %1.2f m, digitado inicialmente, equivale agora a %d quilometro(s) e %1.2f metro(s).", numero_metros,km, metros);

    return 0;
}

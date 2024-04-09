/**45. Um algoritmo para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para
decidir o numero de notas de cada valor que deve ser disponibilizado para o cliente que realizou o
saque. Um possível critério seria o da "distribuição ótima" no sentido de que as notas de menor valor
disponíveis fossem distribuídas em número mínimo possível. Por exemplo, se a maquina só dispõe de
notas de R$ 50, de R$ 10, de R$ 5 e de R$ 1, para uma quantia solicitada de R$ 87, o algoritmo deveria
indicar uma nota de R$ 50, três notas de R$ 10, uma nota de R$ 5 e duas notas de R$ 1. Escreva um
algoritmo que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o
critério da distribuição ótima. */

#include <stdio.h>
#include <math.h>

int main(){
    //Entrada
    float quantia;
    printf("Digite o valor:");
    scanf("%f", &quantia);

    //Processamento
    int nota_50 = floor(quantia / 50);
    float resto1 = fmod(quantia,50);

    int nota_10 = floor(resto1 / 10);
    float resto2 = fmod(resto1,10);

    int nota_5 = floor(resto2 / 5);
    float resto3 = fmod(resto2,5);

    int nota_1 = floor(resto3 / 1);

    //Saída
    printf(" Notas de R$ 50,00 é: %d nota(s), Notas R$ 10,00 é de %d nota(s), Notas R$ 5,00 é de %d nota(s), Notas R$ 1,00 é de %d nota(s).");
    
    return 0;

}


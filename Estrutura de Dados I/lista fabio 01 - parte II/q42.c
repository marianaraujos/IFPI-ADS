// 42. Escreva um algoritmo que, tendo como dados de entrada 2 pontos quaisquer no plano, ponto1 (x1,y1) e
// ponto2 (x2,y2), escreva a distância entre eles, conforme fórmula abaixo.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Entrada
    int pontoA_x1; 
    printf("Valor da coordenada x1: ");
    scanf("%d", &pontoA_x1);

    int pontoA_y1;
    printf("Valor da coordenada y1: ");
    scanf("%d", &pontoA_y1);

    int pontoB_x2;
    printf("Valor da coordenada x2: ");
    scanf("%d", &pontoB_x2);

    const pontoB_y2;
    printf("Valor da coordenada y2: ");
    scanf("%d", &pontoB_y2);


    // Processamento
    int calculo_distancia = pow((pontoB_x2 - pontoA_x1),2) + pow((pontoB_y2 - pontoA_y1),2);
    double distancia = sqrt(calculo_distancia);

    //Saída
    printf("A distância entre os pontos A(um) e B(dois) eh %f!", distancia);

    return 0;
}

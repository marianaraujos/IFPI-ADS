/*44. Sabendo que latão é constituído de 70% de cobre e 30% de zinco, escreva um algoritmo que calcule a
quantidade de cada um desses componentes para se obter certa quantidade de latão (em kg), informada
pelo usuário.*/

#include <stdio.h>
    int main(){
    //Entrada
    float quantidade_de_latao;
    printf("Informe a quantidade de latão: ");
    scanf("%f", &quantidade_de_latao);

    //Processamento
    float cobre = (quantidade_de_latao * 0.70);
    float zinco = (quantidade_de_latao * 0.30);

    //Saída
    printf("A quantidade de cobre eh de %1.2f e a de zinco eh de %1.2f !", cobre, zinco);

    return 0;
}

// 40. Calcule a quantidade de dinheiro gasta por um fumante. Dados de entrada: o número de anos que ele
// fuma, o no de cigarros fumados por dia e o preço de uma carteira (1 carteira tem 20 cigarros).

#include <stdio.h>

int main(){
    //Entrada
    int anos;
    printf("Digite quantos anos você já usa cigarro: ");
    scanf("%d", &anos);

    int quantidade_de_cigarros; 
    printf("Digite quantos cigarros você fuma por dia: ");
    scanf("%d", &quantidade_de_cigarros);

    int preco_medio; 
    printf("Digite o preço médio da carteira de cigarros: ");
    scanf("%d", &preco_medio);

    // Processamento
    float valor_unidade = (quantidade_de_cigarros * preco_medio / 20);
    int dias = (anos * 365);
    float total_gasto = (valor_unidade * dias);

    //Saída
    printf(" O valor gastado por um fumante eh R$ %1.2f !", total_gasto);

    return 0;
}

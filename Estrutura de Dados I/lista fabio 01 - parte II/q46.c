/**46. Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada maior ou igual a
cada uma das duas prestações; estas devem ser iguais, inteiras e as maiores possíveis. Por exemplo, se o
valor da mercadoria for R$ 270,00, a entrada e as duas prestações são iguais a R$ 90,00; se o valor da
mercadoria for R$ 302,00, a entrada é de R$ 102,00 e as duas prestações são iguais a R$ 100,00.
Escreva um algoritmo que receba o valor da mercadoria e forneça o valor da entrada e das duas
prestações, de acordo com as regras acima. */

#include <stdio.h>

int main(){
    //Entrada
    float valor;
    printf("Digite o preço da mercadoria: ");
    scanf("%f", &valor);

    //Processamento
    int primeira_prestacao = floor(valor / 3);
    int segunda_prestacao = primeira_prestacao;
    float valor_de_entrada = (valor - (primeira_prestacao + segunda_prestacao));

    //Saída
    printf("O valor da entrada eh R$ %1.2f e das parcelas, 2x de R$ %1.2f!", valor_de_entrada, primeira_prestacao);

    return 0;
}

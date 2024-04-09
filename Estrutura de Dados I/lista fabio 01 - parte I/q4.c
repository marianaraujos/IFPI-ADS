#include <stdio.h>

int main(){
    // Entrada
    float valorDolar;
    float quantiaDolar;
    // Processamento
    printf("Cotacao atual do dolar:");
    scanf("%f", &valorDolar);
    printf("Digite um valor em dolar:");
    scanf("%f", &quantiaDolar);
    // Cálculo
    float valorEmReal = valorDolar * quantiaDolar;
    //Saída
    printf("%.2f Dolares equivalem a %.2f Reais.\n", quantiaDolar, valorEmReal);
    
    return 0;
}

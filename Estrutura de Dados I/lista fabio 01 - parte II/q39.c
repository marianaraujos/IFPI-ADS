// 39. Leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão:

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Entrada
    const numero_1;
    printf("Informe o primeiro número: ");
    scanf("%d", &numero_1);

    int numero_2; 
    printf("Informe o segundo número: ");
    scanf("%d", &numero_2);
    
    int numero_3; 
    printf("Informe o terceiro número: ");
    scanf("%d", &numero_3);

    // Processamento
    int r = pow((numero_1 + numero_2),2);
    int s = pow((numero_2 + numero_3),2);

    float d_final = ((r + s) / 2);

    // Saída
    printf("O resultado de D = (R + S )/ 2 é : %1.2f", d_final);

    return 0;
}

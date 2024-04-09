#include <stdio.h>

int main(){
    //Entrada
    int a;
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    int b;
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    int c;
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    int d;
    printf("Digite o valor de d: ");
    scanf("%d", &d);

    int e;
    printf("Digite o valor de e: ");
    scanf("%d", &e);

    int f;
    printf("Digite o valor de f: ");
    scanf("%d", &f);

    // Processamento
    float x = (((c*e) - (b*f)) / ((a*e) - (b*d)));
    float y = (((a*f) - (c*d)) / ((a*e) - (b*d)));

    //Saída
    printf("O valor de X é %1.1f e o valor de Y eh: \n %1.1f ", x, y);

    return 0;
}

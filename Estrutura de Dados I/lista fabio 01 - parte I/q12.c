// 12. Leia o salário de um trabalhador e escreva seu novo salário com um aumento de 25%.

#include <stdio.h>

int main(){
    // Entrada
    int salario_inicial;
    printf("Digite o valor inicial do salario: R$");
    scanf("%d", &salario_inicial);

    // Processamento
    int calcular_aumento = (0.25 * salario_inicial); // calculando os 25%
    int atualizar_salario = (salario_inicial + calcular_aumento);

    // Saída
    printf("O novo salario eh de R$ %d!", atualizar_salario);

    return 0;
}
#include <stdio.h>
#include "calculadora.h"

int main(){
    double num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    Numeros operacoes = criarNumeros(num1, num2);

    printf("Soma: %.2lf\n", somar(&operacoes));
    printf("Subtracao: %.2lf\n", subtrair(&operacoes));
    printf("Multiplicacao: %.2lf\n", multiplicar(&operacoes));

    double resultadoDivisao = dividir(&operacoes);
    if (resultadoDivisao != 0.0) {
        printf("Divisao: %.2lf\n", resultadoDivisao);
    } else {
        printf("Divisao por zero nao existe.\n");
    }

    return 0;

}
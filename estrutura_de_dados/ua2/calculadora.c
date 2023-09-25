#include "calculadora.h"

Numeros criarNumeros(double num1, double num2){
    Numeros newNumeros;
    newNumeros.numero1 = num1;
    newNumeros.numero2 = num2;
    return newNumeros;
}

double somar(Numeros *num){
    return num->numero1 + num->numero2;
}
double subtrair(Numeros *num){
    return num->numero1 - num->numero2;
}
double multiplicar(Numeros *num){
    return num->numero1 * num->numero2;
}
double dividir(Numeros *num){
    if (num->numero2 == 0.0){
        return 0.0;
    }
    return num->numero1 / num->numero2;
}

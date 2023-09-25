#ifndef CALCULADORA_H
#define CALCULADORA_H

typedef struct {
    double numero1;
    double numero2;
} Numeros;

Numeros criarNumeros(double num1, double num2);

double somar(Numeros *num);
double subtrair(Numeros *num);
double multiplicar(Numeros *num);
double dividir(Numeros *num);

#endif
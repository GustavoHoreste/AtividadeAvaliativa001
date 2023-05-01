/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34*/

#include <stdio.h>

int main() {
    int n, fib0 = 0, fib1 = 1, fibn, i;

    printf("Digite um numero inteiro nao-negativo: ");
    scanf("%d", &n);

    if (n == 0) {
        fibn = fib0;
    } else if (n == 1) {
        fibn = fib1;
    } else {
        for (i = 2; i <= n; i++) {
            fibn = fib0 + fib1;
            fib0 = fib1;
            fib1 = fibn;
        }
    }

    printf("O enesimo termo da sequencia de Fibonacci eh: %d\n", fibn);

    return 0;
}

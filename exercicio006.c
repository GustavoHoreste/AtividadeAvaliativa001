/*6. Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000
que são múltiplos de 3 ou 5.*/
#include <stdio.h>


int main() {

    int i = 0, soma = 0;
    
    for(i = 1; i <= 1000; i++) {
        if (i%3==0 || i%5==0){
            soma += i;
        }
    }

    printf("A soma dos numeros naturais, de 1 a 1000, que sao multiplos de 3 e 5 e: %d", soma);

    return 0;
}
/*Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido*/

#include <stdio.h>

int main() {
    int num, maior, menor;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

   
    maior = num;
    menor = num;

    while (num >= 0) {
        printf("Digite um número inteiro: ");
        scanf("%d", &num);

        if (num >= 0) {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    printf("O maior número lido foi %d e o menor número lido foi %d\n", maior, menor);

    return 0;
}

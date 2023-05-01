/*10. Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>
#define TAM 10

int main() {
    
    int numeros[TAM], i = 0, soma = 0; 

    for(i = 0; i < TAM; i++){
        printf("Informe a nota [%d]", (i+1));
        scanf("%d", &numeros[i]);
        soma += i;
    }

    printf("A media dos valores e: %d", (soma/TAM));

    return 0;
}
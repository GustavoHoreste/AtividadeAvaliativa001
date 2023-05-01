/*Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo:
Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

#include <stdio.h>
#include <math.h>


int main() {

    int numero = 0;

    printf("Informe um numero e te direi seus divisores: ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            printf("\n %d", i);
        }
    }
 
    return 0;
}
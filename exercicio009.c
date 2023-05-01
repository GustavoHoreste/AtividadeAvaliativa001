/*
Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade
*/

#include <stdio.h>

void lista_frutas();
float abacaxi();
float maca();
float pera();

int main() {

    double valorCompres;
    int produto = 0, i = 1;
 
    lista_frutas();
    printf("\n-----------------------------------\n");


    while (i == 1) {

        printf("O numero do produto: ");
        scanf("%d", &produto);

        switch (produto){
        case 1:
            valorCompres += abacaxi();
            break;
        
        case 2:
            valorCompres += maca();
            break;

        case 3:
            valorCompres += pera();
            break;

        default:
            printf("Valor informa invalido\n");
            break;
    }

    printf("se Quiser comprar mais digite 1 se nao digite 2: ");
    scanf("%d", &i);
}
    
    
    printf("\n\n\tO valor da compra e: %.2f", valorCompres);


    return 0;
}

void lista_frutas(){
    printf("Esse e as futas e sues valores");
    printf("\n1 => ABACAXI – 5,00 a unidade");
    printf("\n2 => MAÇA – 1,00 a unidade");
    printf("\n3 => PERA – 4,00 a unidade\n");
}

float abacaxi(){
    int quantidade = 0;

    printf("Informe a quantidade de abacaxis que ira querer: ");
    scanf("%d", &quantidade);

    return quantidade*5.00;
}

float maca(){
    int quantidade = 0;

    printf("Informe a quantidade de macas que ira querer: ");
    scanf("%d", &quantidade);

    return quantidade*1.00;
}

float pera(){
    int quantidade = 0;

    printf("Informe a quantidade de peras que ira querer: ");
    scanf("%d", &quantidade);

    return quantidade*4.00;
}
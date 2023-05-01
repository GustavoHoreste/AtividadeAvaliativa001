/*2. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais
após a vírgula, segundo a fórmula:*/

#include <stdio.h>
#include <math.h>

int main() {

    float posicao[4], elevado[2], raiz = 0;
    int i = 0;

    for(i = 0; i < 4; i++){
        if(i >= 2) {
            printf("Informe o valor da posicao X e Y para P2: ");
            scanf("%f", &posicao[i]);
        }else{
            printf("Informe o valor da posicao X e Y para P1: ");
            scanf("%f", &posicao[i]);
        }
    }

    elevado[0] = pow(posicao[2] - posicao[0], 2);
    elevado[1] = pow(posicao[3] - posicao[1], 2);

    printf("A distancia dos pontos p1 e p2 e: %.4f\n", sqrt(elevado[0] + elevado[1]));

    return 0;
}
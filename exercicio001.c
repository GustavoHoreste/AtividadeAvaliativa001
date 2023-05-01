#include <stdio.h>
#include <stdlib.h>

int main() {
    system("CLS");
    
    int A = 0, B = 0, C = 0, D = 0;

    printf("Informe um valor para A: ");
    scanf("%d", &A);

    printf("Informe um valor para B: ");
    scanf("%d", &B);

    printf("Informe um valor para C: ");
    scanf("%d", &C);

    printf("Informe um valor para D: ");
    scanf("%d", &D);

    printf("A diferenca dos produtos sao: %d", A*B - C*D);
    return 0;
}
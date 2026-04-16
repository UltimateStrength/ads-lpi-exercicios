#include <stdio.h>

int main() {
    float n1, n2, n3, resultVar;
    int option;

    printf("Passa a primeira nota\n");
    scanf("%f", &n1);

    printf("Passa a segunda nota\n");
    scanf("%f", &n2);

    printf("Passa a terceira nota\n");
    scanf("%f", &n3);

    printf("Qual media tu quer?\n1 - normal\n2 - ponderada\n");
    scanf("%i", &option);

    if (option == 1) {
        resultVar = (n1 + n2 + n3) / 3;
        printf("Media deu: %.2f", resultVar);

    } else if (option == 2) {
        resultVar = (n1*3 + n2*3 + n3*4) / 10;
        printf("Media deu: %.2f", resultVar);

    } else {
        printf("Nao da pra calcular essa media nao mano\n");
    }
}
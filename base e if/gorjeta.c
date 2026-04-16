#include <stdio.h>

int main() {
    float billValue, tipValue, totalValue;
    int satisfaction;

    printf("Passa o valor da conta\n");
    scanf("%f", &billValue);

    printf("Qual o nivel de satisfacao (1 a 5)?\n");
    scanf("%i", &satisfaction);

    if (satisfaction == 1) {
        tipValue = billValue * 0.03;

    } else if (satisfaction == 2) {
        tipValue = billValue * 0.05;

    } else if (satisfaction == 3) {
        tipValue = billValue * 0.10;

    } else if (satisfaction == 4) {
        tipValue = billValue * 0.15;

    } else if (satisfaction == 5) {
        tipValue = billValue * 0.20;

    } else {
        tipValue = billValue * 0.50;
        printf("Escolheu errado ai, vai pagar 50%% de gorjeta kkk\n");
    }

    totalValue = billValue + tipValue;

    printf("Gorjeta: R$ %.2f\n", tipValue);
    printf("Total: R$ %.2f\n", totalValue);
}
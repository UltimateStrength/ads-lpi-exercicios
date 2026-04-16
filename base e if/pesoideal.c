#include <stdio.h>

int main () {

    float urHeigth, resultVar;
    int urGender;

    printf("Passa tua altura ai\n");
    scanf("%f", &urHeigth);

    printf("Passa teu sexo ai (1 pra muie, 2 pra home)\n");
    scanf("%d", &urGender);

    if (urGender != 1 && urGender != 2) {
        printf("Tem que mandar um numero valido ne pae");
        return 1;
    }

    if (urGender == 2) {
        resultVar = (72.7 * urHeigth) - 58;
    } else {
        resultVar = (62.1 * urHeigth) - 44.7;
    }

    printf("teu peso ideal e: %.2f\n", resultVar);

    return 0;
}
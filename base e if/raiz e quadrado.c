#include <stdio.h>
#include <math.h>

int main() {
    float numberVar, resultVar;

    printf("Passa o numero\n");
    scanf("%f", &numberVar);

    if (numberVar < 0) {
        resultVar = pow(numberVar, 2);
        printf("Aproximadamente: %.2f", resultVar);

    } else {
        resultVar = sqrt(numberVar);
        printf("Aproximadamente: %.2f", resultVar);
    }
}
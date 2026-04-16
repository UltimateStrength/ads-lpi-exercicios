#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Passa o valor de a\n");
    scanf("%f", &a);

    printf("Passa o valor de b\n");
    scanf("%f", &b);

    printf("Passa o valor de c\n");
    scanf("%f", &c);

    delta = pow(b, 2) - 4*a*c;

    if (delta < 0) {
        printf("Nao existem raizes reais mano\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("Raiz 1: %.2f\n", x1);
        printf("Raiz 2: %.2f\n", x2);
    }
}
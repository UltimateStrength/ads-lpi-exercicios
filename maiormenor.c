#include <stdio.h>

int main () {

    float VAR_num1, VAR_num2, VAR_num3;
    float VAR_maior, VAR_menor;

    printf("manda 3 numero ai\n");
    scanf("%f %f %f", &VAR_num1, &VAR_num2, &VAR_num3);

    VAR_maior = VAR_num1;
    VAR_menor = VAR_num1;

    if (VAR_num2 > VAR_maior) {
        VAR_maior = VAR_num2;
    }

    if (VAR_num3 > VAR_maior) {
        VAR_maior = VAR_num3;
    }

    if (VAR_num2 < VAR_menor) {
        VAR_menor = VAR_num2;
    }

    if (VAR_num3 < VAR_menor) {
        VAR_menor = VAR_num3;
    }

    printf("maior: %.2f\n", VAR_maior);
    printf("menor: %.2f\n", VAR_menor);

}
#include <stdio.h>

int main () {
    int sideOne, sideTwo, sideThree;
    int sideCount = 0;

    printf("Passa o lado 1 do triangulo\n");
    scanf("%i", &sideOne);

    printf("Passa o lado 2 do triangulo\n");
    scanf("%i", &sideTwo);

    printf("Passa o lado 3 do triangulo\n");
    scanf("%i", &sideThree);

    if (sideOne == sideTwo) {
        sideCount++;
    }

    if (sideTwo == sideThree) {
        sideCount++;
    }

    if (sideOne == sideThree) {
        sideCount++;
    }

    if (sideCount == 1) {
        printf("Isoceles paizao\n");
    }

    if (sideCount == 3) {
        printf("Equilatero paizao\n");
    }

    if (sideCount == 0) {
        printf("Escaleno paizao\n");
    }

    return 0;
}
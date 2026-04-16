#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {

    int numberVar;
    bool isD3;
    bool isD5;

    printf("Passa o numero\n");
    scanf("%i", &numberVar);

    if (numberVar%3 == 0){
        isD3 = true;
    } else {isD3 = false;}

    if (numberVar%5 == 0){
        isD5 = true;
    } else {isD5 = false;}

    if (isD3 && isD5) {
        printf("deu boa");
    } else {printf("da nn");}
}
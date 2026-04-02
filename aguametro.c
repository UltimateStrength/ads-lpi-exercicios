#include <stdio.h>

int main (){
    float waterMeter, resultVar;

    printf("Passa o consumo da agua\n");
    scanf("%f", &waterMeter);

    if (waterMeter >= 20) {
        resultVar = waterMeter*11;
        printf("valor vai dar R$ %.2f", resultVar);

    } else {
        resultVar = waterMeter*8.5;
        printf("valor vai dar R$ %.2f", resultVar);
    }

}
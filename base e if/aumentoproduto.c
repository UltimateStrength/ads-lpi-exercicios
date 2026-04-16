#include <stdio.h>

int main () {

    float VAR_price, VAR_newPrice;

    printf("manda o preco\n");
    scanf("%f", &VAR_price);

    if (VAR_price <= 50) {
        VAR_newPrice = VAR_price * 1.05;

    } else if (VAR_price <= 100) {
        VAR_newPrice = VAR_price * 1.10;

    } else {
        VAR_newPrice = VAR_price * 1.15;
    }

    printf("novo preco: %.2f\n", VAR_newPrice);

    if (VAR_newPrice <= 80) {
        printf("barato\n");

    } else if (VAR_newPrice <= 120) {
        printf("normal\n");

    } else if (VAR_newPrice <= 200) {
        printf("caro\n");

    } else {
        printf("caro pra krl\n");
    }

}
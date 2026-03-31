# include <stdio.h>
# include <math.h>
# include <unistd.h>

int main () {
    float meterDistance, distanceConverted, gasPrice, gasQuantity, finalValue;

    printf("Qual a distancia (em metros) sera percorrida?\n");
    scanf("%f", &meterDistance);

    distanceConverted = meterDistance/1000;

    printf("Qual o preço da gasolina?\n");
    scanf("%f", &gasPrice);

    gasQuantity = distanceConverted/12;
    finalValue = gasQuantity*gasPrice;

    printf("Voce vai usar nessa viagem %.1f litros de gasolina e vai gastar R$ %.2f", gasQuantity, finalValue);

}

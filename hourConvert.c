# include <stdio.h>
# include <math.h>
# include <unistd.h>

int main () {
    int hoursVar, hoursConverted, hoursRemain;

    printf("Quantas horas vamos converter?\n");
    scanf("%i", &hoursVar);

    hoursConverted = hoursVar/24;
    hoursRemain = hoursVar%24;

    printf("Bele pae, nois tem entao: %i dias e %i horas", hoursConverted, hoursRemain);

}

# include <stdio.h>
# include <math.h>
# include <unistd.h>

// código legal sla mano

int main () {

    // safados definidos
    float weightVar, heightVar, imcOutput;

    // começooooooooooooooooooooooooooooooooooooooooooooou
    printf("ei caba, me diga teu peso ou le passo a pexera\n");
    scanf("%f", &weightVar);

    printf("agr mi diga sua altura caba safado\n");
    scanf("%f", &heightVar);

    // calculinho
    printf("calculando...\n");
    sleep(2);
    imcOutput = (weightVar)/(pow(heightVar, 2));

    printf("IMC: %.2f - ", imcOutput);

    if (imcOutput < 16) {
        printf("Magreza severa");
    }
    else if (imcOutput < 20) {
        printf("Magreza");
    }
    else if (imcOutput < 25) {
        printf("Normal");
    }
    else if (imcOutput < 30) {
        printf("Sobrepeso");
    }
    else if (imcOutput < 40) {
        printf("Obesidade");
    }
    else {
        printf("Obesidade severa");
    }

    return 0;
}


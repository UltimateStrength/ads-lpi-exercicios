#include <stdio.h>

int main () {

    int totalStudents;

    printf("Quantos estudantes?\n");
    printf("R= ");
    scanf("%i", &totalStudents);

    int i = 1;

    while(i <= totalStudents) {
        printf("\nEstudante N%i\n", i);

        float firstNote, secondNote, averageResult;

        int j = 1;

        while(j <= 2) {
            if(j == 1) {
                printf("Digite a primeira nota: ");
                scanf("%f", &firstNote);
            } else {
                printf("Digite a segunda nota: ");
                scanf("%f", &secondNote);
            }
            j++;
        }

        averageResult = (firstNote + secondNote) / 2;

        printf("Media = %.2f\n", averageResult);

        i++;
    }
}

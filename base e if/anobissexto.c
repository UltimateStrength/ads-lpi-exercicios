#include <stdio.h>

int main () {

    int VAR_year;

    printf("manda o ano\n");
    scanf("%i", &VAR_year);

    if ((VAR_year % 4 == 0 && VAR_year % 100 != 0) || (VAR_year % 400 == 0)) {
        printf("eh bissexto\n");
    } else {
        printf("nn eh bissexto\n");
    }

}
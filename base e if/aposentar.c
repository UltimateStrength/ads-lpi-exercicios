#include <stdio.h>

int main () {
    int urYear, timeWorked;

    printf("Passa a idade em anos (nn vai mandar segundos)\n");
    scanf("%i", &urYear);

    printf("Passa o tempo trabalhado em anos\n");
    scanf("%i", &timeWorked);

    if (urYear >= 65 || timeWorked >= 30 || (urYear >= 60 && timeWorked >= 25)) {
        printf("Po aposentar patrao\n");
    } else {printf("Pode aposentar nao mano\n");}
}
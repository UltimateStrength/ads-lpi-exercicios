#include <stdio.h>

int main () {

    int VAR_num, VAR_meio;
    

    printf("manda numero de 3 digito\n");
    scanf("%i", &VAR_num);

    VAR_meio = (VAR_num / 10) % 10;

    if (VAR_meio % 2 == 0) {
        printf("meio eh par\n");
    } else {
        printf("meio eh impar\n");
    }

}
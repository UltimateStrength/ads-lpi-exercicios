#include <stdio.h>
#include <ctype.h>

int main () {

    char VAR_char;

    printf("manda um caractere ai\n");
    scanf(" %c", &VAR_char);

    VAR_char = toupper(VAR_char); 

    if (VAR_char == 'A' || VAR_char == 'E' || VAR_char == 'I' || VAR_char == 'O' || VAR_char == 'U') {

        printf("eh vogal\n");

    } else if (VAR_char >= 'A' && VAR_char <= 'Z') {

        printf("eh consoante\n");

    } else {
        printf("eh simbolo doido ai\n");
    }

    return 0;
}
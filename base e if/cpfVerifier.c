#include <stdio.h>

int main() {

    int cpfNumber[11];
    int sum = 0;
    int firstDigit, secondDigit;
    char input[12];

    printf("Diz ai o cpf: ");
    scanf("%s", input);

    // converter string para numeros
    for(int i = 0; i < 11; i++) {
        cpfNumber[i] = input[i] - '0';
    }

    // -------- PRIMEIRO DIGITO --------
    sum = 0;

    for(int i = 0; i < 9; i++) {
        sum += cpfNumber[i] * (10 - i);
    }

    int rest = sum % 11;
    firstDigit = 11 - rest;

    if(firstDigit >= 10)
        firstDigit = 0;

    // -------- SEGUNDO DIGITO --------
    sum = 0;

    for(int i = 0; i < 9; i++) {
        sum += cpfNumber[i] * (11 - i);
    }

    sum += firstDigit * 2;

    rest = sum % 11;
    secondDigit = 11 - rest;

    if(secondDigit >= 10)
        secondDigit = 0;

    // -------- VERIFICACAO --------
    if(firstDigit == cpfNumber[9] && secondDigit == cpfNumber[10]) {
        printf("CPF valido\n");
    } else {
        printf("CPF invalido\n");
    }

}
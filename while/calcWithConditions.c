/*
7 - Implemente um programa que recebe N números inteiros e calcula:

a) A quantidade de números menores que 100 e maiores que -100
b) A soma dos números múltiplos de 5 ou 7
c) A média dos números pares;
e) A porcentagem dos números ímpares dentre todos os números.
*/

# include <stdio.h>
# include <math.h>

int main () {

    //variaveis
    int howMuch = 0, urNumber, qtdLHundred = 0, qtdBMHundred = 0, qtdMulti, qtdMed = 0, qtdPercent, medNumbers = 0, sumNumbers = 0, oddNum = 0, sumMulti = 0;

    printf("Quantos numeros voce ira enviar?\n");
    scanf("%i", &howMuch);

    while (howMuch > 0) {
        howMuch--;

        printf("Digite o numero: ");
        scanf("%i", &urNumber);

        sumNumbers = sumNumbers+urNumber;

        if (urNumber < 100) {
            qtdLHundred++;

        }
        
        if (urNumber > (-100)) {
            qtdBMHundred++;
        }

        if (urNumber%5 == 0 || urNumber%7 == 0) {
            qtdMulti++;
            sumMulti = sumMulti+urNumber;
        }

        if (urNumber%2 == 0) {
            qtdMed++;
            medNumbers = medNumbers+urNumber;
        } else { qtdPercent++; oddNum = oddNum+urNumber; }

    }

    printf("A quantidade de numeros menores que 100 sao: %i\n", qtdLHundred);
    printf("A quantidade de numeros maiores que -100 sao: %i\n", qtdBMHundred);
    printf("A soma dos numeros multiplos de 5 ou 7 sao: %i\n", sumMulti);
    
    /*
    //media dos numeros pares
    medNumbers/qtdMed

    //porcentagem impares
    (oddNum*100)/sumNumbers
    */

    int x=0;
    x = medNumbers/qtdMed;

    printf("A media dos numeros pares e: %i\n", x);

    int y=0;
    y = (oddNum*100)/sumNumbers;

    printf("Os numeros impares compoem: %i porcento do total\n", y);

    
}
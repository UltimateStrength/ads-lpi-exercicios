# include <stdio.h>
# include <math.h>

/*
2 - Implemente um programa que recebe vários números inteiros e conta quantos são múltiplos de 3 ou de 7.
(O programa deve encerrar quando recebe um número negativo.)
*/

int main () {
    // variables 
    int qtdInput, number, qtdMult = 0;

    printf("Digite quantos numeros tu vai colocar: ");
    scanf("%i", &qtdInput);

    while (qtdInput > 0) {
        printf("\nDigite o numero: ");
        scanf("%i", &number);

        if (number >= 0) {
            qtdInput--;

            if (number%3 == 0 || number%7 == 0) {
                qtdMult++;
            }

        } else { break; }

    }

    if (number < 0) {
        printf("Tu mando um negativo, ent o codigo parou ne");
    } else { printf("Temos %i numeros que sao multiplos de 3 ou 7", qtdMult); }

    
}
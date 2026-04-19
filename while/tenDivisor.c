/*
6 - Implemente um programa que recebe como entrada um número inteiro positivo x.
O seu programa deve imprimir na tela todos os números de 1 a x ao lado de uma frase
informando se cada número é ou não um divisor de x (ou seja, se x é ou não múltiplo
desse número). Uma possível execução deste programa é dada a seguir:

Insira um numero:
10
1 e um divisor de 10
2 e um divisor de 10
3 nao e um divisor de 10
4 nao e um divisor de 10
5 e um divisor de 10
6 nao e um divisor de 10
7 nao e um divisor de 10
8 nao e um divisor de 10
9 nao e um divisor de 10
10 e um divisor de 10
*/

# include <stdio.h>
# include <math.h>

int main () {
    //variables
    int inputNum = 1, mainNum = 1;

    printf("digite o numero: ");
    scanf("%i", &mainNum);

    while (inputNum <= mainNum) {
        
        if (mainNum > 0) {
            if (10%inputNum == 0) {
            printf("%i e um divisor de 10\n", inputNum);

            } else { printf("%i nao e um divisor de 10\n", inputNum); }

            inputNum++;

        }

    }
}
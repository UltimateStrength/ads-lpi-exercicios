# include <stdio.h>
# include <math.h>

/*4 – Faça um programa que solicite ao usuário um conjunto de números inteiros. A
leitura dos dados terminará quando for ingressado o número zero. Pede-se a soma e a
média de todos os números lidos (excluindo o zero).*/

int main () {
    //variables
    int chosenNum=1;
    float amountNum=0, resultTotal=0,medNum=0;

    while (chosenNum != 0) {
        printf("Digite um numero para um conjunto de numeros inteiros (0 finaliza): ");
        scanf("%i", &chosenNum);

        if (chosenNum != 0) {
            amountNum++;
            resultTotal = resultTotal + chosenNum;

        } else { break; }
        
    }

    medNum = resultTotal/(amountNum);

    printf("A soma deu %.1f, ja a media deu %.2f", resultTotal, medNum);

}
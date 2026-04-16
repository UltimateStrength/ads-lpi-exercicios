# include <stdio.h>
# include <math.h>

/*
1 - Escreva um programa que recebe e calcula o quadrado de vários números.
(O programa se encerra quando o usuário digita 0.)
*/

int main () {
    // variaveis
    float number, result;

    while (number != 0) {
        printf("\nDigite o numero: ");
        scanf("%f", &number);
        result = pow(number, 2);
        
        if (number != 0) {
            //
            printf("O quadrado e: %.2f", result);
            
        } else { break;}

    } 
    
}
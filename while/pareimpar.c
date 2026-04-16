# include <stdio.h>
# include <math.h>

/*
3 – Implemente um programa que recebe N números inteiros (onde N é um número
fornecido pelo usuário) e conta quantos são pares e quantos são ímpares. Ao final do
programa, deve aparecer uma mensagem dizendo se existem mais números pares ou
ímpares foram digitados.
*/

int main () {
    // variables
    int howMuch, numbers, even = 0, odd = 0;

    printf("quantos tu numero tu vai manda aqui pae: ");
    scanf("%i", &howMuch);

    while (howMuch > 0) {
        printf("manda o numero ai: ");
        scanf("%i", &numbers);
        if (numbers%2 == 0) {
            even++;
        } else { odd++; }
        howMuch--;
    }

    printf("tem %i par e %i impar", even, odd);
    
}
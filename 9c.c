//Fazer um programa para mostrar a soma de todos os números de um dominó.

#include <stdio.h>

int main() {
    int total = 0;
    int soma = 0;

    for (int i = 0; i <= 6; i++) {
        for (int j = i; j <= 6; j++) {
            
            soma = i + j; 
            total += soma;
            
        }
    }

    printf("\nA soma de todos os pontos de um jogo de domino e: %d\n", total);

    return 0;
}
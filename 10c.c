//Fazer um programa no qual o usuário vai entrando sucessivamente com valores
//positivos. Quando o usuário entrar com um valor negativo o programa pára de
//pedir valores e calcula a média dos valores já fornecidos.


#include <stdio.h>

int main() {
    float numero = 0, soma = 0, media = 0;
    int contador = 0;

    printf("Digite um valor positivo (ou negativo para sair): ");
    scanf("%f", &numero);

    while (numero >= 0) {
        soma += numero;      
        contador++;          
        
        printf("Digite o proximo valor: ");
        scanf("%f", &numero);
    }

    if (contador > 0) {
        media = soma / contador;
        printf("\nVoce digitou %d numeros positivos.", contador);
        printf("\nA media dos valores e: %.2f\n", media);
    } else {
        printf("\nNenhum numero positivo foi digitado.\n");
    }

    return 0;
}
#include <stdio.h> 

int main() {
    int totalSegundos, horas, minutos, segundos, resto;

    printf("Digite a quantidade total de segundos: ");
    
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    resto = totalSegundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("\nResultado:\n");
    printf("%d hora(s), %d minuto(s) e %d segundo(s).\n", horas, minutos, segundos);

    return 0;
}
#include <stdio.h>

int main(){
	
	char simbolo;
	float n1, n2, resultado;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	
	printf("Digite a operacao (+, - ou *): ");
	scanf (" %c", &simbolo);
	
	if(simbolo == '+'){
		resultado = n1+n2;
	} else if (simbolo == '-') {
		resultado = n1 - n2;
	} else {
		resultado = n1 * n2;
	}
	
	printf("O resultado da operacao: %c, ficou: %.2f", simbolo, resultado);
	
	return 0;
	
}
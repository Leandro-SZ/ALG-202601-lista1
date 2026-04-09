#include <stdio.h>

int main(){
	
	int numero, resto;
	
	printf("Digite o numero: ");
	scanf("%d", &numero);
	
	resto = numero % 2;
	
	if(resto == 0){
		printf("O numero: %d, par", numero);
	} else {
		printf("O numero: %d, impar", numero);
	}
	
	return 0;
}
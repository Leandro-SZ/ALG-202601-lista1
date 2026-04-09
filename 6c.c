//Fazer um programa para mostrar todos os números perfeitos entre 1 e 100. 

#include <stdio.h>

int main(){
	
	int resultado, numero, soma;
	
		numero = 1;
		soma = 0;
		
	while ( numero <101) {
	
		for (int i = 1; i<numero; i++){
			resultado = numero % i;
			if (resultado == 0){
				soma += i;
			}
		}
		
		if (soma == numero){
				printf("%d\n", soma);
			}
			
			numero += 1;
			soma = 0;
	
	}
}
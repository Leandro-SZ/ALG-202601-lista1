//Crie um programa que construa a tabuada de 2 até 10

# include <stdio.h>

int main() {
	
	int numero, multiplicacao;
	
	numero = 1;
	
	while (numero <11){
	
	
		for (int i = 1; i < 11; i++){
			multiplicacao = numero * i;
			printf("%d * %d = %d\n", numero, i, multiplicacao);
		
		
			multiplicacao = 0;
		
		}
		printf("\n");
		numero += 1;
	
	}
	
	
	return 0;
}
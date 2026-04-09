//Fazer um programa para receber um número inteiro do usuário e determinar se
//este número é primo ou não.

# include <stdio.h>

int main(){
	
	int numero, soma, resultado;
	
	printf("Digite um numero natural: ");
	scanf("%d", &numero);
	
	soma = 0;
	
	for (int i = 1; i < numero +1; i++){
		resultado = numero % i;
		if(resultado == 0){
			soma += i;
		}
	}
	
	if (soma == numero +1){
		printf ("O numero: %d e primo", numero);
	} else {
		printf("O numero %d nao e primo", numero);
	}
	
	return 0;
}
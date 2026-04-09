#include <stdio.h>

int main(){
	
	float n1, n2, n3, media, menor, maior;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	
	printf("Digite o terceiro numero: ");
	scanf("%f", &n3);
	
	media = (n1+n2+n3)/3;
	
	
	menor = 0;
	maior = 0;
	
		
	if(n1 <= n2 && n1<= n3){
		menor = n1;
	} else if (n2 <= n1 && n2<= n3) {
		menor = n2;
	} else {
		menor = n3;
	}
	
		if(n1 >= n2 && n1>= n3){
		maior = n1;
	} else if (n2 >= n1 && n2 >= n3) {
		maior = n2;
	} else {
		maior = n3;
	}
	
	printf("O maior numero: %.2f, o menor numero: %.2f, media dos numeros: %.2f", maior, menor, media);
	
	return 0;
	

}
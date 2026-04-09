# include <stdio.h>

int main() {
	double a = 0, b = 1, proximo;
	
	for (int i = 1; i < 101; i++)  {
		printf("termo: %d: %.0f\n", i, a);
		
		proximo = a + b;
		a = b;
		b = proximo;
	}
	
	return 0;
}
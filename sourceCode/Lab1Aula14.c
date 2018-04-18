#include<stdio.h>

int main() {
	int cont;
	int i;
	int max = 5;
	
	for(cont = 0; cont < max; cont++) {
		printf("Contador: %i\n", cont);
	}
	printf("Contador após o for: %i\n", cont);
	
	//for de trás para frente
	for(i = 7; i >=0 ; i--) {
		printf("%i ", i);
	}
	printf("\nValor do i após o for: %i\n", i);
}

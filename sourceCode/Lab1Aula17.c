#include<stdio.h>

int main() {
	
	int i;
	//declara��o de um vetor com 4 posi��es
	int notas[4];

	//atribuindo valores � cada posi��o do vetor	
	notas[0] = 10;
	notas[1] = 15;
	scanf("%i", & notas[3]);
	notas[2] = 7;
	
	//imprime um �nico elemento
	printf("Quarto elemento do vetor: %i\n", notas[3]);
	
	for(i = 0; i < 4; i++) {
		printf("Notas na posi��o %i: %i\n", i, notas[i]);
	}
	
}

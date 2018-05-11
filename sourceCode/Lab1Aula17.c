#include<stdio.h>

int main() {
	
	int i;
	//declaração de um vetor com 4 posições
	int notas[4];

	//atribuindo valores à cada posição do vetor	
	notas[0] = 10;
	notas[1] = 15;
	scanf("%i", & notas[3]);
	notas[2] = 7;
	
	//imprime um único elemento
	printf("Quarto elemento do vetor: %i\n", notas[3]);
	
	for(i = 0; i < 4; i++) {
		printf("Notas na posição %i: %i\n", i, notas[i]);
	}
	
}

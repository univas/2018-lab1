#include<stdio.h>

#define MAX 5

int main() { 
	//exercício 4 da lista
	
	int vetorUm[MAX];
	int vetorDois[MAX];
	int vetorTres[MAX * 2];
	int i, k;
	
	for(i=0; i<MAX; i++) {
		scanf("%i", &vetorUm[i]); //lê os 5 valores do teclado
	}

	for(i=0; i<MAX; i++) {
		scanf("%i", &vetorDois[i]); //lê os 5 valores do teclado
	}

	for(i=0; i<MAX; i++) {

		//copia o vetor 1 para o vetor 3
		k = i * 2;
		vetorTres[k] = vetorUm[i];

		//copia o vetor 2 para o vetor 3
		k = i * 2 + 1;
		vetorTres[k] = vetorDois[i];
	}
	
	//imprime o vetor 3	
	for(i=0; i < MAX*2; i++) {
		printf("%i ", vetorTres[i]);
	}
	
	// 1 2 3 4 5 6 7 8 9 0
	// 2 4 6 8 8 7 6 5 4 3
	// 0 1 0 1 0 1 0 1 0 1
	// 3 2 1 0 0 0 0 9 8 7
}

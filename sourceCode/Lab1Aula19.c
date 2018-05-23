#include<stdio.h>

#define MAX 5

int main() { 
	//exercício 3 da lista
	
	int vetorUm[MAX];
	int vetorDois[MAX];
	int i;
	
	for(i=0; i<MAX; i++) {
		scanf("%i", &vetorUm[i]); //lê os 5 valores do teclado
	}

	for(i=0; i<MAX; i++) {
		scanf("%i", &vetorDois[i]); //lê os 5 valores do teclado
	}
	
	for(i=0; i<MAX; i++) {
		printf("%i ", vetorUm[i]);
		printf("%i ", vetorDois[i]);
	}
	
	// 1 2 3 4 5 6 7 8 9 0
	// 2 4 6 8 8 7 6 5 4 3
	// 0 1 0 1 0 1 0 1 0 1
	// 3 2 1 0 0 0 0 9 8 7
}

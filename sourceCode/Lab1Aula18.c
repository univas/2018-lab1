#include<stdio.h>

#define MAX 10

int main() {
	//exercício 1 da lista
	
	int vetor[MAX];
	int i;
	int soma = 0;
	float media;
	int maior, menor;
	
	for(i=0; i<MAX; i++) {
		scanf("%i", &vetor[i]); //lê os 10 valores do teclado
	}

	maior = vetor[0];
	menor = vetor[0];
	
	for(i=0; i<MAX; i++) {
		soma += vetor[i]; //calcula a soma
		
		if(vetor[i] > maior) {
			maior = vetor[i];
		}
		if(vetor[i] < menor) {
			menor = vetor[i];
		}
	}
	media = soma / MAX; //calcula a média
	
	printf("Resultado. Soma: %i Média: %.2f Menor: %i Maior: %i\n", soma, media, menor, maior);
	
	
	// 1 2 3 4 5 6 7 8 9 0
	// 2 4 6 8 8 7 6 5 4 3
	// 0 1 0 1 0 1 0 1 0 1
	// 3 2 1 0 0 0 0 9 8 7
}

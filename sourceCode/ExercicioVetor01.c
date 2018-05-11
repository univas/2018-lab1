#include<stdio.h>

//constante
#define QUANTIDADE 10

int main() {
	
	int i;
	int soma = 0;
	//declaração de um vetor com 10 posições
	int valores[QUANTIDADE];
	
	//QUANTIDADE = 5;//erro: não pode mudar o valor de uma constante

	for(i = 0; i < QUANTIDADE; i++) {
		scanf("%i", & valores[i]);
	}
	
	for(i = 0; i < QUANTIDADE; i++) {
		soma += valores[i];
	}
	
	printf("A soma dos %i números é: %i\n", QUANTIDADE, soma);
}

//Testar com os seguinte valores
// 1 2 3 4 5 6 7 8 9 0
// 2 4 6 8 0 1 3 5 7 9
// 5 5 5 5 5 5 5 5 5 0
// 9 9 9 9 9 0 0 0 0 0
// 12 12 12 12 12 12 12 12 12 12
// 100 530 56 98 12 11 9 1234 6543 15


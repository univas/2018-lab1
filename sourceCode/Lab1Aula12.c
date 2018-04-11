//Exercício 3: mostrar o maior e o menor valor - será feito em um arquivo separado.

/*
	Utilizar as seguintes sequências de valores para testar o código:
	Sequência 1: 2 4 6 8 0 -1
	Sequência 2: 10 20 30 -30 -1
	Sequência 3: 1000 2000 -1
	Sequência : -1
	Sequência 3: 4 3 2 1 0 -1
*/

#include<stdio.h>
int main() {
	int maior = 0, menor = 0;
	int valor;

	printf("Digite um valor (-1 para terminar): ");
	scanf("%i", &valor);
	if(valor != -1) {
		maior = valor;
		menor = valor;
	}

	while(valor != -1) { //o -1 é um flag - indica uma condição especial
		printf("Digite um valor (-1 para terminar): ");
		scanf("%i", &valor);
		
		if(valor != -1) {
			if(valor > maior) {
				maior = valor;
			}
			if(valor < menor) {
				menor = valor;
			}
		}
	}
	
	printf("Terminou a leitura dos números\n");
	printf("Resultado maior: %i menor: %i\n", maior, menor);
}


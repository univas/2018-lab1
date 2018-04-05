#include<stdio.h>

//controlando o loop de acordo com a leitura do teclado
int main() {
	//ler valores até digitar -1
	
	int valor;
	
	while(valor != -1) { //o -1 é um flag - indica uma condição especial
		printf("Digite um valor (-1 para terminar): ");
		scanf("%i", &valor);
	}
	printf("Terminou a leitura dos números\n");

	//Exercício 1: mostrar a soma de todos os números lidos (exceto o -1)
	
	//Exercício 2: mostrar a média aritmética dos valores lidos
	
	//Exercício 3: mostrar o maior e o menor valor
	
	
	/*
		Utilizar as seguintes sequências de valores para testar o código:
		Sequência 1: 2 4 6 8 0 -1
		Sequência 2: 10 20 30 -30 -1
		Sequência 3: 1000 2000 -1
		Sequência : -1
		Sequência 3: 4 3 2 1 0 -1
		
	*/
}

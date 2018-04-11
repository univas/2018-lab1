#include<stdio.h>

//controlando o loop de acordo com a leitura do teclado
int main() {
	//ler valores até digitar -1
	
	int valor;
	int media = 0;
	int quantidade = 0;
	int soma = 0;//não pode usar o lixo da memória
//	printf("Resultado da soma: %i\n", soma);
	
	while(valor != -1) { //o -1 é um flag - indica uma condição especial
		printf("Digite um valor (-1 para terminar): ");
		scanf("%i", &valor);
		if(valor != -1) {
			soma += valor; // é a mesma coisa que: soma = soma + valor;
			quantidade++;
		}
	}

	if(quantidade != 0) {
		media = soma / quantidade;
	} else {
		printf("Não foi possível calcular a média.\n");
	}

	printf("Terminou a leitura dos números\n");
	printf("Resultado da soma: %i\n", soma);
	printf("Resultado da média: %i\n", media);
	//Exercício 1: mostrar a soma de todos os números lidos (exceto o -1)
	//Exercício 2: mostrar a média aritmética dos valores lidos
	//Exercício 3: mostrar o maior e o menor valor - será feito em um arquivo separado.
	
	/*
		Utilizar as seguintes sequências de valores para testar o código:
		Sequência 1: 2 4 6 8 0 -1
		Sequência 2: 10 20 30 -30 -1
		Sequência 3: 1000 2000 -1
		Sequência : -1
		Sequência 3: 4 3 2 1 0 -1
		
	*/
}

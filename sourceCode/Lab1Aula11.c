#include<stdio.h>

//controlando o loop de acordo com a leitura do teclado
int main() {
	//ler valores at� digitar -1
	
	int valor;
	
	while(valor != -1) { //o -1 � um flag - indica uma condi��o especial
		printf("Digite um valor (-1 para terminar): ");
		scanf("%i", &valor);
	}
	printf("Terminou a leitura dos n�meros\n");

	//Exerc�cio 1: mostrar a soma de todos os n�meros lidos (exceto o -1)
	
	//Exerc�cio 2: mostrar a m�dia aritm�tica dos valores lidos
	
	//Exerc�cio 3: mostrar o maior e o menor valor
	
	
	/*
		Utilizar as seguintes sequ�ncias de valores para testar o c�digo:
		Sequ�ncia 1: 2 4 6 8 0 -1
		Sequ�ncia 2: 10 20 30 -30 -1
		Sequ�ncia 3: 1000 2000 -1
		Sequ�ncia : -1
		Sequ�ncia 3: 4 3 2 1 0 -1
		
	*/
}

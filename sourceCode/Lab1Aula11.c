#include<stdio.h>

//controlando o loop de acordo com a leitura do teclado
int main() {
	//ler valores at� digitar -1
	
	int valor;
	int media = 0;
	int quantidade = 0;
	int soma = 0;//n�o pode usar o lixo da mem�ria
//	printf("Resultado da soma: %i\n", soma);
	
	while(valor != -1) { //o -1 � um flag - indica uma condi��o especial
		printf("Digite um valor (-1 para terminar): ");
		scanf("%i", &valor);
		if(valor != -1) {
			soma += valor; // � a mesma coisa que: soma = soma + valor;
			quantidade++;
		}
	}

	if(quantidade != 0) {
		media = soma / quantidade;
	} else {
		printf("N�o foi poss�vel calcular a m�dia.\n");
	}

	printf("Terminou a leitura dos n�meros\n");
	printf("Resultado da soma: %i\n", soma);
	printf("Resultado da m�dia: %i\n", media);
	//Exerc�cio 1: mostrar a soma de todos os n�meros lidos (exceto o -1)
	//Exerc�cio 2: mostrar a m�dia aritm�tica dos valores lidos
	//Exerc�cio 3: mostrar o maior e o menor valor - ser� feito em um arquivo separado.
	
	/*
		Utilizar as seguintes sequ�ncias de valores para testar o c�digo:
		Sequ�ncia 1: 2 4 6 8 0 -1
		Sequ�ncia 2: 10 20 30 -30 -1
		Sequ�ncia 3: 1000 2000 -1
		Sequ�ncia : -1
		Sequ�ncia 3: 4 3 2 1 0 -1
		
	*/
}

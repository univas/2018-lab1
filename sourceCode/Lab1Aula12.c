//Exerc�cio 3: mostrar o maior e o menor valor - ser� feito em um arquivo separado.

/*
	Utilizar as seguintes sequ�ncias de valores para testar o c�digo:
	Sequ�ncia 1: 2 4 6 8 0 -1
	Sequ�ncia 2: 10 20 30 -30 -1
	Sequ�ncia 3: 1000 2000 -1
	Sequ�ncia : -1
	Sequ�ncia 3: 4 3 2 1 0 -1
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

	while(valor != -1) { //o -1 � um flag - indica uma condi��o especial
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
	
	printf("Terminou a leitura dos n�meros\n");
	printf("Resultado maior: %i menor: %i\n", maior, menor);
}


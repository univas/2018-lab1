#include<stdio.h>

//controlando o loop com vari�vel contador.
int main() {
	
	//mostrar os n�meros de zero a dez
	int contador = 0;

	printf("Vai iniciar o primeiro loop\n");	
	while(contador <= 10) {
		printf("Valor aumentado: %i\n", contador);
		
		contador++; //incrementa: � a mesma coisa que: contador = contador + 1
	}
	//quanto vale o contador aqui?
	//Resposta:
	//
	printf("Pronto para iniciar o segundo loop...\n");
	//mostra os n�meros de 11 a 6
	while(contador > 5) {
		printf("Valor reduzido: %i\n", contador);
		contador--;//decrementa
	}
}

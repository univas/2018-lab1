#include<stdio.h>

int main() {

	int idade;//declação da variável idade
	//o valor inicial da variável idade é "lixo"
	
	idade = 12;//atribuindo o valor 12 na variável idade
	printf("%i\n", idade);
	
	idade = 4;
	printf("%i\n", idade);
	
	int nota1, nota2, nota3;
	
	nota1 = 25;
	nota2 = 20;
	nota3 = 16;
	
	int somaDasNotas = nota1 + nota2 + nota3;//declaração e inicialização
	
	float mediaFinal;
	
	mediaFinal = somaDasNotas / 3;
	
	mediaFinal = (nota1 + nota2 + nota3) / 3;

	//imprimir a média final	
	printf("%f", mediaFinal);
	
	int divisor = 21;
	int dividendo = 4;
	int resto = divisor % dividendo;
	
	//imprimir o valor do resto
	printf("O resto da divisão é: %i", resto);	
}

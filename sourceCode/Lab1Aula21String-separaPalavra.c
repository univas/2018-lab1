#include <stdio.h>

#define MAX 1000

//ler uma frase e imprimir uma palavra por linha

int main() {
	char vetorDeChar[MAX];
	int i;
	
	printf("Digite %i caracteres: ", MAX);
	
	//faz a leitura dos caracteres
	gets(vetorDeChar);
	
	printf("Frase lida: %s\n", vetorDeChar);
	
	printf("Vai imprimir as palavras separadamente.\n");
	
	//imprimir uma palavra por linha
	for(i = 0; i < MAX; i++) {
		if(vetorDeChar[i] == '\0') { //chegou no fim da string
			break;
		}
		if(vetorDeChar[i] == ' ') { //se for espaço, imprime \n
			printf("\n");
		}
		printf("%c", vetorDeChar[i]);
	}
}

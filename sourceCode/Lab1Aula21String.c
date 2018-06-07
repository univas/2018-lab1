#include <stdio.h>

#define MAX 1000

//exercício 8 - usando gets(string)

int main() {
	char vetorDeChar[MAX];
	int i;
	int contLetraA = 0;
	int contLetraE = 0;
	int contLetraI = 0;
	int contLetraO = 0;
	int contLetraU = 0;
	int contEspaco = 0;
	
	printf("Digite %i caracteres: ", MAX);
	
	//faz a leitura dos caracteres
	gets(vetorDeChar);
	
	//contar a quantidade de cada vogal
	
	for(i = 0; i < MAX; i++) {
		switch(vetorDeChar[i]) {
			case 'a':
			case 'A':
				contLetraA++;
				break;
			case 'e':
			case 'E':
				contLetraE++;
				break;
			case 'i':
			case 'I':
				contLetraI++;
				break;
			case 'o':
			case 'O':
				contLetraO++;
				break;
			case 'u':
			case 'U':
				contLetraU++;
				break;
			case ' ':
				contEspaco++;
				break;
		}
	}
	printf("Quantidade de a's: %i\n", contLetraA);
	printf("Quantidade de e's: %i\n", contLetraE);
	printf("Quantidade de i's: %i\n", contLetraI);
	printf("Quantidade de o's: %i\n", contLetraO);
	printf("Quantidade de u's: %i\n", contLetraU);
	printf("Quantidade de espaços: %i\n", contEspaco);
}

//exercício 4 da lista 1 - parte 2
#include<stdio.h>

int main() {
	int kilowats;
	float valorDoKilowat;
	float valorDaConta;
	
	printf("Digite a quantidade de kilowats consumida: ");
	scanf("%i", &kilowats);
	
	if(kilowats <= 70) { //14 centavos por kilowatt
		valorDoKilowat = 0.14;
	} else if(kilowats <= 110) { //37 centavos
		valorDoKilowat = 0.37;
	} else if(kilowats <= 150) { //64 centavos
		valorDoKilowat = 0.64;
	} else if(kilowats <= 230) { //87 centavos
		valorDoKilowat = 0.87;
	} else { // um real e quinze centavos
		valorDoKilowat = 1.15;
	}
	
	valorDaConta = kilowats * valorDoKilowat;	//o cálculo final é feito aqui
	printf("O valor da conta eh: %.2f", valorDaConta);	
}

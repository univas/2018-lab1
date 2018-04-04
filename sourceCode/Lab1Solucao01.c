
1)
#include<stdio.h>
int main() {
	int num, cent, dez, unid, resto;
	printf("Digite um número inteiro de três dígitos: ");
	scanf("%i", &num);
	
	cent = num / 100;
	resto = num % 100;
	dez = resto / 10;
	unid = resto % 10;

	printf("O número possui %i centenas, %i dezenas e %i unidades.\n", cent, dez, unid);
}



3)
#include<stdio.h>
int main() {
	int num1, num2, num3, aux;
	printf("Digite os três números: ");
	scanf("%i %i %i", &num1, &num2, &num3);

	if(num2 < num1) {
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
	if(num2 < num3) {
		aux = num2;
		num2 = num3;
		num3 = aux;
	}
	if(num2 < num1) {
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
	printf("O menor é: %i, o intermediário é: %i e o maior é: %i\n", num1, num2, num3);
}



5)
#include<stdio.h>
int main() {
	int mes;
	printf("Digite o número do mês: ");
	scanf("%i", &mes);
	
	switch(mes) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("O mês possui 31 dias\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("O mês possui 30 dias\n");
			break;
		case 2:
			printf("O mês possui 28 dias\n");
			break;
		default:
			printf("Mês inválido!\n");
			break;
	}
}





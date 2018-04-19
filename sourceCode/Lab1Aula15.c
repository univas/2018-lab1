#include<stdio.h>

//constante
#define MAX 7

/*Imprimir o seguinte padrão:

*
**
***
****
*****
******
*******

*/
int main() {
	int i, fim;
	
	for(fim = 1; fim <= MAX; fim++) {

		for(i = 0; i < fim; i++) {
			printf("*");
		}
		printf("\n");
//		fim++;
	}
	
/*
	for(i = 0; i < fim; i++) {
		printf("*");
	}
	printf("\n");
	fim++;

	for(i = 0; i < fim; i++) {
		printf("*");
	}
	printf("\n");
	fim++;

	for(i = 0; i < fim; i++) {
		printf("*");
	}
	printf("\n");
	fim++;

	for(i = 0; i < fim; i++) {
		printf("*");
	}
*/
}

#include<stdio.h>

//constante
#define MAX 5

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
	int i, j, fim;
	
	for(fim = 1, j = MAX; //inicialização de mais de uma variável
		fim <= MAX; 
		fim++, j--) { //incremento de mais de uma variável

		for(i = 1; i < j; i++) {
			printf("#");
		}
		for(i = j; i <= MAX; i++) {
			printf("*");
		}
		printf("\n");
	}
}

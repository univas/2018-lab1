#include<stdio.h>

//constante
#define MAX 5

/*Imprimir o seguinte padr�o:

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
	
	for(fim = 1, j = MAX; //inicializa��o de mais de uma vari�vel
		fim <= MAX; 
		fim++, j--) { //incremento de mais de uma vari�vel

		for(i = 1; i < j; i++) {
			printf("#");
		}
		for(i = j; i <= MAX; i++) {
			printf("*");
		}
		printf("\n");
	}
}

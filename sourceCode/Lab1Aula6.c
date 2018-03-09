#include<stdio.h>

/*programa para ler a nota e faltas de um aluno e 
  imprimir a situação do aluno
*/
int main() {
	int nota, faltas;
	int aprovadoNota, aprovadoFalta;
	
	printf("Digite a nota final do aluno:");
	scanf("%i", &nota);
	
	printf("Digite a quantidade de faltas:");
	scanf("%i", &faltas);
	
	aprovadoNota = nota >= 60;
	aprovadoFalta = faltas <= 20;
	
	if(aprovadoNota && aprovadoFalta) {
		printf("\nO aluno estah aprovado.");
	}

	if((nota >= 60) && (faltas <= 20)) {//uma forma de verificar se está aprovado
		printf("\nO aluno estah aprovado.");
	}

	if(!(aprovadoNota && aprovadoFalta)) {//usa o operador NÃO
		printf("\nO aluno estah reprovado");
	}

	if(!aprovadoNota || !aprovadoFalta) {//outra forma de 
		printf("\nO aluno estah reprovado");
	}

	if(nota >= 30 && nota < 60 && faltas <= 20) {//exame final
		printf("\nO aluno estah de exame final");
	}

	
	//testes com números inteiros
	if(-1) {
		printf("\nnúmero -1");//imprime
	}

	if(0) {
		printf("\nnúmero zero"); //não imprime
	}
	
	if(5) {
		printf("\nnúmero 5");//imprime
	}
}

#include<stdio.h>

/*programa para ler a nota e faltas de um aluno e 
  imprimir a situa��o do aluno
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

	if((nota >= 60) && (faltas <= 20)) {//uma forma de verificar se est� aprovado
		printf("\nO aluno estah aprovado.");
	}

	if(!(aprovadoNota && aprovadoFalta)) {//usa o operador N�O
		printf("\nO aluno estah reprovado");
	}

	if(!aprovadoNota || !aprovadoFalta) {//outra forma de 
		printf("\nO aluno estah reprovado");
	}

	if(nota >= 30 && nota < 60 && faltas <= 20) {//exame final
		printf("\nO aluno estah de exame final");
	}

	
	//testes com n�meros inteiros
	if(-1) {
		printf("\nn�mero -1");//imprime
	}

	if(0) {
		printf("\nn�mero zero"); //n�o imprime
	}
	
	if(5) {
		printf("\nn�mero 5");//imprime
	}
}

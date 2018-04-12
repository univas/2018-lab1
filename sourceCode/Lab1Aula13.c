#include<stdio.h>

//2) (Algoritmo) Ler a quantidade de alunos, e para cada aluno ler a matr�cula e a 
//nota. Ao final, o programa deve mostrar a matr�cula e a nota do melhor aluno.

//3) (Algoritmo) Alterar o exerc�cio 2 para que ele n�o permita que a quantidade de 
//alunos seja negativa, e tamb�m que a nota do aluno esteja entre zero e cem.

int main() {
	int qtdAlunos;
	int mat, nota;
	int melhorMat, melhorNota;
	int cont = 0;

	do {
		printf("Digite a quantidade de alunos:");
		scanf("%i", &qtdAlunos);
	} while(qtdAlunos <= 0);

	while(cont < qtdAlunos) { //loop
		printf("Digite a matr�cula: ");
		scanf("%i", &mat);
		
		do {
			printf("Digite a nota: ");
			scanf("%i", &nota);
		} while(nota < 0 || nota > 100);
		
		if(nota > melhorNota) {
			melhorNota = nota;
			melhorMat = mat;
		}
		cont++;
	}
	printf("A melhor nota �: %i com a matr�cula: %i\n", melhorNota, melhorMat);	
}

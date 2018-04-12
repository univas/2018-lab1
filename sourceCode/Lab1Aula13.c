#include<stdio.h>

//2) (Algoritmo) Ler a quantidade de alunos, e para cada aluno ler a matrícula e a 
//nota. Ao final, o programa deve mostrar a matrícula e a nota do melhor aluno.

//3) (Algoritmo) Alterar o exercício 2 para que ele não permita que a quantidade de 
//alunos seja negativa, e também que a nota do aluno esteja entre zero e cem.

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
		printf("Digite a matrícula: ");
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
	printf("A melhor nota é: %i com a matrícula: %i\n", melhorNota, melhorMat);	
}

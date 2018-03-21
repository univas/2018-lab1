#include<stdio.h>

//faça um programa que leia o conceito de um aluno e imprima a situação do aluno.
//conceito 'A' ou 'a' ----> excelente
//conceito 'B' ou 'b' ----> muito bom
//conceito 'C' ou 'c' ----> muito bom
//conceito 'D' ou 'd' ----> bom
//conceito 'E' ou 'e' ----> regular
//conceito 'F' ou 'f' ----> ruim
//qualquer outro valor ---> conceito inválido
int main() {
	char conceito;
	
	printf("Digite o conceio do aluno:");
	scanf("%c", &conceito);

	if(conceito == 'A' || conceito == 'a') {
		printf("Excelente!");
	} else if(conceito == 'B' || conceito == 'b' || conceito == 'C' || conceito == 'c') {
		printf("Muito bom!");
	} else if(conceito == 'D' || conceito == 'd') {
		printf("Bom");
	} else if(conceito == 'E' || conceito == 'e') {
		printf("Regular");
	} else if(conceito == 'F' || conceito == 'f') {
		printf("Ruim :(");
	} else {
		printf("Conceito %c invalido.", conceito);
	}
	
	//usando switch-case
	switch(conceito) {
		case 'A':
		case 'a':
			printf("Excelente!");
			break;//interrompe o bloco
		
		case 'B':
		case 'b':
		case 'C':
		case 'c':
			printf("Muito bom!");
			break;
		
		case 'D':
		case 'd':
			printf("Bom");
			break;
		
		case 'E':
		case 'd':
			printf("Regular");
			break;
		
		case 'F':
		case 'f':
			printf("Ruim :(");
			break;
		
		default: //nenhuma das anteriores
			printf("Conceito %c invalido.", conceito);
	}
	
}

#include<stdio.h>
#include<strings.h>

int main(){
	int notas [] = {75, 65, 40, 50};
	char mensagemOi [] = {'o', 'i', 0};
	char mensagemOla [] = "Olá, boa noite.";

	printf("%s\n", mensagemOi);
	printf("%s\n", mensagemOla);
	
	char str01 [] = "Mensagem01"; 
	char str02 [] = "Mensagem02"; 
	char str03 [] = "Mensagem03"; 
	char str04 [] = "Mensagem04"; 
	char str05 [] = "Mensagem05"; 
	
	char strDestino [50] = "";
	
	int lenght = strlen(str01); //comprimento
	printf("Tamanho de str01: %i\n", lenght);
	
	strcpy(strDestino, str02);//copia a string 
	printf("String de destino: %s\n", strDestino);
	
	strcat(strDestino, "-----");
	printf("String de destino após concatenar os tracinhos: %s\n", strDestino);
	
	strcat(strDestino, str03);
	printf("String de destino contatenada com str03 %s\n", strDestino);
	
	int resultadoCmp = strcmp("aaab", "aaac");
	printf("Resultado da comparação de aaab e aaac: %i\n", resultadoCmp);
	
	resultadoCmp = strcmp("zzzzzzx", "zzzzzze");
	printf("Resultado da comparação de zzzzzzx e zzzzzze: %i\n", resultadoCmp);
}

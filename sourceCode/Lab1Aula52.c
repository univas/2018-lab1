#include<stdio.h>

int main() {
	//compra de a��car
	int nivelMinimo = 2;
	int nivelMedido = 1;
	
	int vemChuva = 0;//vari�vel l�gica da chuva
	int temDinheiro = 1;//tem dinheiro
	
	//exerc�cio: fazer a leitura das vari�veis: nivelMedido, vemChuva e temDinheiro
	
	
	int resultadoNivel = nivelMedido < nivelMinimo;
	
	int vaiComprar = resultadoNivel && !vemChuva && temDinheiro;
	
	printf("%i", vaiComprar);//imprime o resultado: vai ou n�o comprar
}

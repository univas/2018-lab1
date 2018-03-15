#include<stdio.h>

//exemplo de corte de internet
int main() {
	int consumo;
	int consumoMaximo = 8;
	int atingiuLimite;
	int pagouAConta;//pagou a conta
	int vaiCortarAInternet;

	printf("Digite o valor do consumo: ");
	scanf("%i", &consumo);
	
	//exercício: fazer a leitura do valor da variável pagouAConta
	//incluir um printf para ficar bonitinho
	//executar várias vezes com valores diferentes, para ver se está certo
	printf("Digite o valor de 'pagou a conta': ");
	scanf("%i", &pagouAConta);
	
	atingiuLimite = consumo >= consumoMaximo;
	vaiCortarAInternet = atingiuLimite || !pagouAConta;
	
	//imprimir o resultado do corte ou não da internet
	if(vaiCortarAInternet) {
		printf("\nA internet será cortada. :( ");
	} else {
		printf("\nA internet não será cortada. :) ");
	}
}







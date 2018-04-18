#include<stdio.h>

int main() {

	int v1, v2;
	int m1 = 0, m2 = 0;
	
	printf("Digite um valor: ");
	scanf("%i", &v1);
	printf("Digite outro valor: ");
	scanf("%i", &v2);
	
	//método da tabuada
	while(m1 != m2 || m1 == 0) {
		if(m1 < m2) {
			m1 += v1;
		} else {
			m2 += v2;
		}
	}
	printf("Resultado: %i\n", m1);
}


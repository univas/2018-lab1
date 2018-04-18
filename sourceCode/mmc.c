#include<stdio.h>

int main() {

	int v1 = 60;
	int v2 = 90;
	
	int m1 = 0, m2 = 0;
	
	while(m1 != m2 || m1 == 0) {
		if(m1 < m2) {
			m1 += v1;
		} else {
			m2 += v2;
		}
		if( m1 == m2) {
			break;
		}
	}
	printf("Resultado: %i\n", m1);
}


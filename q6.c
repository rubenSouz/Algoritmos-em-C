#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int x, intervUm = 0, intervDois = 0, intervTres = 0, intervQuatro = 0;
	
	do {
		printf("Digite um numero: ");
		scanf("%d", &x);
		
		if (x >= 0 && x <= 25) {
			intervUm++;
		} else if (x >= 26 && x <= 50) {
			intervDois++;
		} else if (x >= 51 && x <= 75) {
			intervTres++;
		} else if (x >= 76 && x <= 100) {
			intervQuatro++;
		}
	} while (x >= 0);
	
	printf("\nNumeros no intervalo de: ");
	printf("\n0 ate 25: %d", intervUm);
	printf("\n6 ate 50: %d", intervDois);
	printf("\n51 ate 75: %d", intervTres);
	printf("\n76 ate 100: %d", intervQuatro);
}

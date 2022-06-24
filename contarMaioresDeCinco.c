#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	
	int x, contMaiorCinco = 0;
	char escolha[2];
	
	do {
		printf("Digite um numero: ");
		scanf("%d", &x);
		
		if (x > 5) {
			contMaiorCinco++;
		}
		
		printf("Deseja inserir outro numero (s/n): ");
		fflush(stdin);
		gets(escolha);
	} while (stricmp(escolha, "S") == 0);
	
	printf("Quantidade de numeros maiores que cinco: %d", contMaiorCinco);
}

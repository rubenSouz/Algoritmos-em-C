#include <stdio.h>
#include <stdlib.h>

int dobro (int x) {
	return (x * 2);
}

int multiplo (int x) {
	return (x * 3);
}

void quartaParteInteira (int x) {
	printf("\nQuarta parte inteira de %d: %d", x, x / 4);
}

void main() {
	
	int x, result = 0;
	
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	
	result = dobro(x);
	printf("Dobro de %d: %d", x, result);

	result = multiplo(x);
	printf("\nMultiplo de %d: %d", x, result);
	
	quartaParteInteira (x);
}

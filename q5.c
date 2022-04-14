#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int dia = 0, somaCm = 0;
	
	while (somaCm < 1800) {
		somaCm += 20 - 11;
		dia++;
	}
	printf("A aranha chegou ao topo de 18 metros em: %d dias", dia); 
}

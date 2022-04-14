#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	
	char estado[3];
	
	printf("Digite a sigla do estado: ");
	gets(estado);
	
	if (stricmp(estado, "RJ") == 0) {
		printf("Rio de Janeiro");
	} else if (stricmp(estado, "SP") == 0) {
		printf("Paulista");
	} else if (stricmp(estado, "AM") == 0) {
		printf("Amazonas");
	} else {
		printf("Outro estado ou estado invalido");
	}
}

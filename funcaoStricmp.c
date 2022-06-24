#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	
	char nome[10], sexo[2];
	int idade;
	
	printf("Digite o nome: ");
	gets(nome);
	
	printf("Insira o sexo (F ou M): ");
	gets(sexo);
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	if ((stricmp(sexo, "F") == 0) && idade < 25) {
		printf("\nNome: %s\nAceita", nome);
	} else {
		printf("Nome: %s\nNao aceita", nome);
	}
}

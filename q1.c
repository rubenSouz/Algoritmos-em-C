#include <stdio.h>
#include <stdlib.h>

void main() {
	
	float imc = 0, peso, altura;
	
	printf("Digite o peso (kg): ");
	scanf("%f", &peso);
	
	printf("Digite a altura (m): ");
	scanf("%f", &altura);
	
	imc = peso / pow(altura, 2);
	printf("IMC: %.1f\nSituacao: ", imc);
	
	if (imc < 18.5) {
		printf("Abaixo de peso");
	} else if (imc >= 18.5 && imc < 25) {
		printf("Peso normal");
	} else if (imc >= 25 && imc < 30) {
		printf("Acima do peso");
	} else {
		printf("Obeso");
	}
}

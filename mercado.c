#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	
	int codigoProduto, coca = 0, feijao = 0, farinha = 0, acucar = 0, frango = 0;
	char op[2];
	float valorFinal = 0, pagamento, troco = 0;
	printf("Codigo/Produtos: \n1 p/ Coca 2L - 9 R$");
	printf("\n2 p/ Farinha 1Kg - 3,99 R$");
	printf("\n3 p/ Feijao 1Kg - 7 R$");
	printf("\n4 p/ Açucar 1Kg - 3,10 R$");
	printf("\n5 p/ Frango 1Kg - 25,99 R$");
	
	do {
		printf("\nEscolha o produto: ");
		scanf("%d", &codigoProduto);
		
		switch (codigoProduto) {
			case 1:
				valorFinal += 9;
				coca++;
			break;
			
			case 2:
				valorFinal += 3.99;
				farinha++;
			break;
				
			case 3:
				valorFinal += 7;
				feijao++;
			break;
			
			case 4:
				valorFinal += 3.10;
				acucar++;
			break;
			
			case 5:
				valorFinal += 25.99;
				frango++;
			break;
			
			default:
				printf("\nCodigo invalido!s");
		}
		printf("Deseja comprar algo mais? (s/n): ");
		fflush(stdin);
		gets(op);
	} while (stricmp(op, "S") == 0);
	
	printf("\nProdutos escolhidos/qnt: ");
	
	if (coca >= 1) {
		printf("\nCoca 2L - 9 R$ Qntd: %dx", coca);
	}
	if (farinha >= 1) {
		printf("\nFarinha 1Kg - 3,99 R$ Qntd: %dx", farinha);
	}
	if (feijao >= 1) {
		printf("\nFeijao 1Kg - 7 R$ Qntd: %dx", feijao);
	}
	if (acucar >= 1) {
		printf("\nAçucar 1Kg - 3,10 R$ Qntd: %dx", acucar);
	}
	if (frango >= 1) {
		printf("\nFrango 1Kg - 25,99 R$ Qntd: %dx", coca);
	}
	
	printf("\n\nValor final: %.2f R$", valorFinal);
	
	printf("\n\nInsira o valor do pagamento R$: ");
	scanf("%f", &pagamento);
	
	troco = pagamento - valorFinal;
	
	printf("\nPagamento: %.2f R$", pagamento);
	printf("\nTroco: %.2f R$", troco);
	
}

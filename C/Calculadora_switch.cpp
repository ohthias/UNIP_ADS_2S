#include <stdio.h>
#include <locale.h>

float soma, sub, multi, divi, valor_1, valor_2;
int escolha;
// Switch Case

int main() {
	setlocale(LC_ALL,"");	
	printf("*CALCULADORA*\n");
	printf("SOMA [1] SUBTRA��O [2] MAULTIPLICA��O [3] DIVIS�O [4]");
	printf("\nEscolha: ");
	scanf("%d", &escolha);
	
	printf("\nDigite o valor 1: ");
	scanf("%f", &valor_1);
	printf("Digite o valor 2: ");
	scanf("%f", &valor_2);
	
	switch(escolha) {
		case 1:
			soma = valor_1 + valor_2;
			printf("O valor da soma �: %.2f", soma);
			break;
		case 2:
			sub = valor_1 - valor_2;
			printf("O valor da subtra��o �: %.2f", sub);
			break;
		case 3:
			multi = valor_1 * valor_2;
			printf("O valor da multiplica��o �: %.2f", multi);
			break;
		case 4:
			divi = valor_1 / valor_2;
			printf("O valor da divis�o �: %.2f", divi);
			break;
		default:
			printf("Esse caso de opera��o n�o existe. Programa sendo encerrado");
			break;
	}
}

#include <stdio.h>
#include <locale.h>

float soma, sub, multi, divi, valor_1, valor_2;
int escolha;
// Switch Case

int main() {
	setlocale(LC_ALL,"");	
	printf("*CALCULADORA*\n");
	printf("SOMA [1] SUBTRAÇÃO [2] MAULTIPLICAÇÃO [3] DIVISÃO [4]");
	printf("\nEscolha: ");
	scanf("%d", &escolha);
	
	printf("\nDigite o valor 1: ");
	scanf("%f", &valor_1);
	printf("Digite o valor 2: ");
	scanf("%f", &valor_2);
	
	switch(escolha) {
		case 1:
			soma = valor_1 + valor_2;
			printf("O valor da soma é: %.2f", soma);
			break;
		case 2:
			sub = valor_1 - valor_2;
			printf("O valor da subtração é: %.2f", sub);
			break;
		case 3:
			multi = valor_1 * valor_2;
			printf("O valor da multiplicação é: %.2f", multi);
			break;
		case 4:
			divi = valor_1 / valor_2;
			printf("O valor da divisão é: %.2f", divi);
			break;
		default:
			printf("Esse caso de operação não existe. Programa sendo encerrado");
			break;
	}
}

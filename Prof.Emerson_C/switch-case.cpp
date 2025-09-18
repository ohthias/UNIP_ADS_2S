//switch - case
//CALCULADORA COM OPÇÕES DE SOMAR, MULT, DIV, SUB
#include <stdio.h>
#include <locale.h>

float soma, sub, mult, div, valor_1, valor_2;
int escolha;

int main(){
	setlocale(LC_ALL, "");
	printf("***CALCULADORA***\n");
	printf("Soma[1] Subtração[2] Multiplicação[3] Divisão[4]\n");
	printf("Escolha: ");
	scanf("%d", &escolha);
	
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &valor_1);
	printf("Digite o segundo valor: ");
	scanf("%f", &valor_2);
	
	switch(escolha){
	
	case 1:
		soma = valor_1 + valor_2;
		printf("Soma: %.2f", soma);
		break;
	case 2:
		sub = valor_1 - valor_2;
		printf("Subtração: %.2f", sub);
		break;
	case 3: 
		mult = valor_1 * valor_2;
		printf("Multiplicação: %.2f", mult);
		break;
	case 4:
		div =  valor_1 / valor_2; 
		printf("Divisão: %.2f", div);
		break;
	default:
		printf("Opção inválida");
		break;
	}
}



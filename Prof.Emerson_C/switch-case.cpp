//switch - case
//CALCULADORA COM OP��ES DE SOMAR, MULT, DIV, SUB
#include <stdio.h>
#include <locale.h>

float soma, sub, mult, div, valor_1, valor_2;
int escolha;

int main(){
	setlocale(LC_ALL, "");
	printf("***CALCULADORA***\n");
	printf("Soma[1] Subtra��o[2] Multiplica��o[3] Divis�o[4]\n");
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
		printf("Subtra��o: %.2f", sub);
		break;
	case 3: 
		mult = valor_1 * valor_2;
		printf("Multiplica��o: %.2f", mult);
		break;
	case 4:
		div =  valor_1 / valor_2; 
		printf("Divis�o: %.2f", div);
		break;
	default:
		printf("Op��o inv�lida");
		break;
	}
}



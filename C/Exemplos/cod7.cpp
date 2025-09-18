#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL," ");
	
	float valor_bruto, desconto, valor_pagar;
	printf("Digite o valor bruto da compra: ");
	scanf("%f", &valor_bruto);
	
	desconto = valor_bruto * 0.1;
	valor_pagar = valor_bruto - desconto;
	
	printf("Valor da compra: %.2f; com desconto de: %.2f; valor a pagar: %.2f", valor_bruto,desconto, valor_pagar);
}

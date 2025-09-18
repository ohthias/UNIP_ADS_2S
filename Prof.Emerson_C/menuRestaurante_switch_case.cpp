#include<stdio.h>
#include<stdlib.h>

int main(){
	
int opcao, qtd;
float compra;
printf("Digite a opcao: ");
scanf("%d",&opcao);	
printf("Digite a qtd: ");
scanf("%d",&qtd);
	
	switch(opcao){
	
	case 1:	
		compra=qtd*20.00;
		break;
	case 2:
		compra=qtd*28.00;
		break;
	case 3:
		compra=qtd*33.00;
		break;
	case 4:
		compra=qtd*38.00;
		break;
	default:
		printf("Opcao invalida\n");
		break;
	}
	
	printf("Valor total da compra: %.2f", compra);


}

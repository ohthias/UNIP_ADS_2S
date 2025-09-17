// Dia da semana

#include <stdio.h>
#include <locale.h>

int escolha;

int main() {
	setlocale(LC_ALL, "");
	printf("Escolha um número de 1-7: ");
	scanf("%d", &escolha);
	
	switch(escolha) {
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda");
			break;
		case 3:
			printf("Terça");
			break;
		case 4:
			printf("Quarta");
			break;
		case 5:
			printf("Quinta");
			break;
		case 6:
			printf("Sexta");
			break;
		case 7:
			printf("Sabádo");
			break;
	}
}

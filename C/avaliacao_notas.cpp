// Avaliação de notas

#include <stdio.h>
#include <locale.h>

int nota;

int main() {
	printf("Digite uma nota: ");
	scanf("%d", &nota);
	
	switch(nota){
		case (10):
			printf("Excelente");
			break;
		case (9):
			printf("Excelente");
			break;
		case (8):
			printf("Bom");
			break;
		case (7):
			printf("Bom");
			break;
		case (6):
			printf("Regular");
			break;
		case (5):
			printf("Regular");
			break;
		case (4):
			printf("Insuficiente");
			break;
		case (3):
			printf("Insuficiente");
			break;
		case (2):
			printf("Insuficiente");
			break;
		case (1):
			printf("Insuficiente");
			break;
		case (0):
			printf("Insuficiente");
			break;
		default:
			printf("Nota inválida");
			break;
	}
}

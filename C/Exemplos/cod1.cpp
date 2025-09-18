#include <stdio.h>

int main(){
	float NP1, NP2, PIM, Media;
	printf("Digite a NP1: ");
	scanf("%f", &NP1);
	printf("Digite a NP2: ");
	scanf("%f", &NP2);
	printf("Digite o PIM: ");
	scanf("%f", &PIM);
	
	Media = (NP1*4 + NP2*4 + PIM*2)/10;
	printf("A Média é de: %.2f", Media);
}


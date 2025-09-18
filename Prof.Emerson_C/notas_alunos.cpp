#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float np1, np2, pim, media;
	
	printf("Digite nota da P1: ");
	scanf("%f", &np1);
	printf("Digite nota da P2: ");
	scanf("%f", &np2);
	printf("Digite nota do PIM: ");
	scanf("%f", &pim);
	
	media = (np1*4+np2*4+pim*2)/10;
	
	if(media>=7){
		printf("Aluno aprovado com média: %.2f", media);
	}else{
		float exame, nota_necessaria;
		printf("Aluno de exame!!!\n");
		nota_necessaria = 10 - media;
		printf("Nota necessária para aprovação: %.2f\n", nota_necessaria);
		printf("Digite a nota do exame: ");
		scanf("%f", &exame);
		if(exame>=nota_necessaria){
			printf("Aluno aprovado");
		}else{
			printf("Aluno reprovado");
		}
	}
}

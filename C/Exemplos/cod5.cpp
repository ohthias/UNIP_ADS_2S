#include <stdio.h>
#include <locale.h>
       
int main(){
	setlocale(LC_ALL," ");
	
	float diametro,circunferencia,area,raio;
	printf("Digite o Valor do di�metro: ");
	scanf("%f", & diametro);
    
    raio = (diametro/2);
	circunferencia = (3.14*diametro);
	area = (3.14*raio*raio);
	
	printf("O valor da circunfer�ncia � de: %.2f", circunferencia);
	printf("O valor da �rea � de:%.f", area);
	
}

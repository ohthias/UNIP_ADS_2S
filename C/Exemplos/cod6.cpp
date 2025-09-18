#include <stdio.h>
#include <locale.h>
       
int main(){
	setlocale(LC_ALL," ");
	
	float km_inicial,km_final,km_percorrido,km_por_litros, litros;
	printf("Digite o km inicial: ");
	scanf("%f", & km_inicial);
	printf("Digite o km final: ");
	scanf("%f", & km_final);
	printf("Digite a quantidade de Litros: ");
	scanf("%f", &litros);
	
	km_percorrido = (km_final - km_inicial);
	km_por_litros = (km_percorrido/litros);
	
	printf("KM por Litros: %.2f", km_por_litros);
	printf("");
	printf("Litros abastecidos: %.2f", litros);
	
}


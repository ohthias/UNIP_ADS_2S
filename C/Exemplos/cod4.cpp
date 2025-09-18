#include <stdio.h>
int main(){
	float base,altura,area;
	printf("Digite o valor da base: ");
	scanf("%f", &base);
	printf("Digite o valor da altura: ");
	scanf("%f", &altura);
	
	area = (base * altura)/2;
	printf("O valor da àrea é de: %2f", area);
}

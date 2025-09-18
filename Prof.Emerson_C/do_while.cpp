#include<stdio.h>
int main(){
	
	int usuario, senha, tentativas;
	bool validacao=true;
	
	do{ //fazer
		printf("Digite o numero de usuario: ");
		scanf("%d", &usuario);
		printf("Digite a senha: ");
		scanf("%d", &senha);
		
		tentativas = tentativas + 1;
		
		if(usuario == 123 && senha == 321)	{
			printf("Logado no sistema");
			validacao=false;
		}else{
			printf("Dados incorretos, tente novamente\n");
		}
	}while(validacao);
	
	printf("\nForam necessarias %d tentativa(s)", tentativas);
}

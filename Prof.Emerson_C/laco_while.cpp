#include<stdio.h>
int main(){
	// Laços de Repetição (while, do-while, for)
	int usuario, senha, tentativas;
	bool validacao=true;
	
	printf("Digite o numero de usuario: ");
	scanf("%d", &usuario);
	printf("Digite a senha: ");
	scanf("%d", &senha);
	
	while(validacao){
		tentativas = tentativas + 1;
		if(usuario == 123 && senha == 321)	{
			printf("Logado no sistema");
			validacao=false;
		}else{
			printf("Dados incorretos, tente novamente\n");
			printf("Digite o numero de usuario: ");
			scanf("%d", &usuario);
			printf("Digite a senha: ");
			scanf("%d", &senha);
		}
	}

	printf("\nForam necessarias %d tentativa(s)", tentativas);
}

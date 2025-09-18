#include <stdio.h> //do-while
int usuario, senha, tentativas;
bool validacao = true;

int main(){

	do{ 
		printf("Digite o numero do usuario: ");
		scanf("%d", &usuario);
		printf("Digite a senha: ");
		scanf("%d", &senha);
		
		tentativas = tentativas + 1;
	
		if(usuario == 123 && senha == 321){
			printf("Usuario logado");
			validacao = false;
		}else{
			printf("Dados invalidos\n");
		}
	}while(validacao);
	
	printf("\nTentativas: %d", tentativas);
}


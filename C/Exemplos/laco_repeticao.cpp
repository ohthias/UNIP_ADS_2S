//la�os de repeti��o (while - do-while - for)
#include <stdio.h>
int usuario,senha,tentativas;
bool validacao=true;


int main(){
	
	printf("Digite o numero do usuario: ");
	scanf("%d", &usuario);
	printf("Digite a senha: ");
	scanf("%d", &senha);
	
	while (validacao){
		tentativas = tentativas +1;
		if (usuario == 123 && senha == 321){
			printf("usuario logado");
			validacao = false;
		}else{
			printf("dados invalidos\n");
			printf("Digite o numero do usuario: ");
			scanf("%d", &usuario);
			printf("Digite a senha: ");
			scanf("%d", &senha);
		}
	}	
	printf("\nTentativas: %d", tentativas);
}


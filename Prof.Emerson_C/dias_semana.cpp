//Exercício 2: Dia da Semana
//Peça para o usuário digitar um número de 1 a 7 e 
//imprima o nome do dia da semana correspondente (1 = Domingo, 2 = Segunda etc). 
//Se o número for inválido, exiba uma mensagem.

#include <stdio.h>

int main() {
    int dia;

    printf("Digite um número de 1 a 7 para saber o dia da semana: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido! Digite um número entre 1 e 7.\n");
            break;
    }

    return 0;
}


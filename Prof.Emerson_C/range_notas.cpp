/*Exerc�cio 3: Avalia��o de Nota

Receba uma nota (0 a 10) e mostre a avalia��o:

9 a 10: Excelente
7 a 8: Bom
5 a 6: Regular
0 a 4: Insuficiente*/

#include <stdio.h>

#include <stdio.h>

int main() {
    int nota;
    
    printf("Digite uma nota de 0 a 10: ");
    scanf("%d", &nota);

    // Verifica��o inicial
    if (nota < 0 || nota > 10) {
        printf("Nota inv�lida! Digite um valor entre 0 e 10.\n");
        return 1;
    }

    // Avalia��o com switch
    switch (nota) {

        // Excelente: notas 9 e 10
        case 10:
        case 9:
            printf("Excelente\n");
            break;

        // Bom: notas 7 e 8
        case 8:
        case 7:
            printf("Bom\n");
            break;

        // Regular: notas 5 e 6
        case 6:
        case 5:
            printf("Regular\n");
            break;

        // Insuficiente: 0 a 4
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Insuficiente\n");
            break;
    }

    return 0;
}



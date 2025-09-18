#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float ouro, prata, bronze;

    printf("*** Balan�a de Metais ***\n\n");

    // Entrada de dados
    printf("Digite o peso do ouro: ");
    scanf("%f", &ouro);
    printf("Digite o peso da prata: ");
    scanf("%f", &prata);
    printf("Digite o peso do bronze: ");
    scanf("%f", &bronze);

    printf("\n");

    // Verifica��o do mais pesado
    if (ouro > prata && ouro > bronze) {
        printf("Ouro � o mais pesado.\n");
    } else if (prata > ouro && prata > bronze) {
        printf("Prata � o mais pesado.\n");
    } else if (bronze > ouro && bronze > prata) {
        printf("Bronze � o mais pesado.\n");
    } else {
        // Tratamento de empates
        if (ouro == prata && ouro == bronze) {
            printf("Todos os metais t�m o mesmo peso.\n");
        } else if (ouro == prata && ouro > bronze) {
            printf("Ouro e Prata s�o os mais pesados.\n");
        } else if (ouro == bronze && ouro > prata) {
            printf("Ouro e Bronze s�o os mais pesados.\n");
        } else if (prata == bronze && prata > ouro) {
            printf("Prata e Bronze s�o os mais pesados.\n");
        } else {
            printf("Existe empate entre os metais mais pesados.\n");
        }
    }

    return 0;
}


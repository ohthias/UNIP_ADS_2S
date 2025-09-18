#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float ouro, prata, bronze;

    printf("*** Balança de Metais ***\n\n");

    // Entrada de dados
    printf("Digite o peso do ouro: ");
    scanf("%f", &ouro);
    printf("Digite o peso da prata: ");
    scanf("%f", &prata);
    printf("Digite o peso do bronze: ");
    scanf("%f", &bronze);

    printf("\n");

    // Verificação do mais pesado
    if (ouro > prata && ouro > bronze) {
        printf("Ouro é o mais pesado.\n");
    } else if (prata > ouro && prata > bronze) {
        printf("Prata é o mais pesado.\n");
    } else if (bronze > ouro && bronze > prata) {
        printf("Bronze é o mais pesado.\n");
    } else {
        // Tratamento de empates
        if (ouro == prata && ouro == bronze) {
            printf("Todos os metais têm o mesmo peso.\n");
        } else if (ouro == prata && ouro > bronze) {
            printf("Ouro e Prata são os mais pesados.\n");
        } else if (ouro == bronze && ouro > prata) {
            printf("Ouro e Bronze são os mais pesados.\n");
        } else if (prata == bronze && prata > ouro) {
            printf("Prata e Bronze são os mais pesados.\n");
        } else {
            printf("Existe empate entre os metais mais pesados.\n");
        }
    }

    return 0;
}


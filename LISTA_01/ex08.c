#include <stdio.h>

int main() {
    int ano;

    printf("Digite o ano desejado: ");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        printf("Ano de eleição\n");
    } else {
        printf("Não é ano de eleição\n");
    }
}
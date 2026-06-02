#include <stdio.h>

int main() {
    int n;
    int soma = 0;

    printf("Digite um número: ");
    scanf("%i", &n);

    while (n != 0) {
        soma = soma + n;

        printf("Digite outro número: ");
        scanf("%i", &n);
    }

    printf("Soma total: %i\n", soma);}
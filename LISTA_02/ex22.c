#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%i", &n);

    while (n <= 0) {
        printf("Numero invalido. Digite novamente: ");
        scanf("%i", &n);
    }

    printf("Numero valido: %i\n", n);

}
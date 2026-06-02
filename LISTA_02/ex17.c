#include <stdio.h>

int main() {
    int n;
    int c = 0;

    printf("Digite um numero: ");
    scanf("%i", &n);

    while (n >= 0) {
        c++;

        printf("Digite outro numero: ");
        scanf("%i", &n);
    }

    printf("Quantidade digitada: %i\n", c);
}
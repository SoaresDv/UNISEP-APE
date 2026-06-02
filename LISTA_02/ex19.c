#include <stdio.h>

int main() {
    int n;
    int m;

    printf("Digite um numero: ");
    scanf("%i", &n);

    m = n;

    while (n != 999) {
        if (n > m) {
            m = n;
        }

        printf("Digite outro número: ");
        scanf("%i", &n);
    }

    printf("Maior número digitado: %i\n", m);
}
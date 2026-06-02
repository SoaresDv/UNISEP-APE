#include <stdio.h>

int main() {
    int n;
    int d = 0;

    printf("Digite um numero: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            d++;
        }
    }

    if (d == 2) {
        printf("O numero é primo\n");
    } else {
        printf("O numero nao é primo\n");
    }
}
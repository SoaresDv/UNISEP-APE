#include <stdio.h>

int main() {
    int n;
    int f = 1;

    printf("Digite um numero: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        f = f * i;
    }

    printf("fatorial: %i\n", f);
}
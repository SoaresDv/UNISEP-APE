#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        printf("%i\n", i);
    }
}
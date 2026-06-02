#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%i", &n);

    for (int i = n; i >= 0; i--) {
        printf("%i\n", i);
    }
}
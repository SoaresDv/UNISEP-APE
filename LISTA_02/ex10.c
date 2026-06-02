#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%i", &a);

    printf("Digite o segundo numero: ");
    scanf("%i", &b);

    for (int i = a + 1; i < b; i++) {
        printf("%i\n", i);
    }
}
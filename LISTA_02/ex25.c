#include <stdio.h>

int main() {
    int valor;

    printf("Digite o valor: ");
    scanf("%i", &valor);

    printf("Notas de 100: %i\n", valor / 100);
    valor = valor % 100;

    printf("Notas de 50: %i\n", valor / 50);
    valor = valor % 50;

    printf("Notas de 20: %i\n", valor / 20);
    valor = valor % 20;

    printf("Notas de 10: %i\n", valor / 10);
    valor = valor % 10;

    printf("Notas de 5: %i\n", valor / 5);
    valor = valor % 5;

    printf("Notas de 1: %i\n", valor);
}
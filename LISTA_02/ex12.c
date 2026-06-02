#include <stdio.h>

int main() {
    int c = 0;

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            c++;
        }
    }

    printf("Quantidade de pares: %i\n", c);
}
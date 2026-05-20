#include <stdio.h>

int main() {
    float temp;

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    if (temp < 15) {
        printf("Frio\n");
    } else if (temp <= 25) {
        printf("Agradável\n");
    } else {
        printf("Quente\n");
    }
}
#include <stdio.h>

int main() {
    int idade;
    int soma = 0;
    int contador = 0;
    float media;

    printf("Digite uma idade: ");
    scanf("%i", &idade);

    while (idade != 0) {
        soma = soma + idade;
        contador++;

        printf("Digite outra idade: ");
        scanf("%i", &idade);
    }

    if (contador > 0) {
        media = (float)soma / contador;
        printf("Media das idades: %.2f\n", media);
    } else {
        printf("Nenhuma idade foi digitada.\n");
    }

}
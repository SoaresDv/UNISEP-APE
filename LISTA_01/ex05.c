#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Não pode votar\n");
    } else if ((idade >= 16 && idade <= 17) || idade > 70) {
        printf("Voto opcional\n");
    } else {
        printf("Voto obrigatório\n");
    }
}
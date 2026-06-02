#include <stdio.h>

int main() {
    int senha;
    int senhaCorreta = 1234;

    printf("Digite a senha: ");
    scanf("%i", &senha);

    while (senha != senhaCorreta) {
        printf("Senha errada. Tente novamente: ");
        scanf("%i", &senha);
    }

    printf("Senha correta!\n");
}
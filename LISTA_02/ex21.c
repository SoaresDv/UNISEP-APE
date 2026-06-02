#include <stdio.h>

int main() {
    int op;

    do {
        printf("\n1 - Dizer Ola\n");
        printf("2 - Dizer Tudo bem?\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%i", &op);

        if (op == 1) {
            printf("Ola\n");
        } else if (op == 2) {
            printf("Tudo bem?\n");
        } else if (op == 3) {
            printf("Saindo...\n");
        } else {
            printf("opção invalida\n");
        }

    } while (op != 3);
}
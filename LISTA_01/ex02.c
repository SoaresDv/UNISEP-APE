#include <stdio.h>

int main() {
    float salario, bonus, final;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    if (salario > 3000) {
        bonus = salario * 0.05;
    } else {
        bonus = salario * 0.10;
    }

    final = salario + bonus;

    printf("O seu salário final é de: R$ %.2f\n", final);
}
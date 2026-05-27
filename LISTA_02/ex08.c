#include <stdio.h>

int main()
{
    int n1;

    printf("Digite a tabuada que deseja: ");
    scanf("%i", &n1);

    for (int i = 1; i <= 10; i = i + 1) {
        printf("%i x %i = %i\n", n1, i, n1 * i);
    }

    return 0;
}
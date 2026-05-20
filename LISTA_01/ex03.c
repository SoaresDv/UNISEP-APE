#include <stdio.h>

int main()
{
	float n1 = 0;
	float n2 = 0;
	int op = 0;
	float resultado = 0;



	printf("Digite o 1° número: ");
	scanf("%f", &n1);
	printf("Digite o 2° número: ");
	scanf("%f", &n2);
    printf("===== MENU =====\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%i", &op);
	

	if(op == 1) {
	    resultado = n1 + n2;
		printf("O resultado da soma de %.2f + %.2f foi de: %.2f", n1, n2, resultado);
	}else if(op == 2){
	    resultado = n1 - n2;
		printf("O resultado da subtração de %.2f - %.2f foi de: %.2f", n1, n2, resultado);
	}else if(op == 3){
	    resultado = n1 * n2;
		printf("O resultado da multiplicação de %.2f * %.2f foi de: %.2f", n1, n2, resultado);
	}else if(op == 4){
	    resultado = n1 / n2;
		printf("O resultado da divisão de %.2f / %.2f foi de: %.2f", n1, n2, resultado);
	}else{
		printf("Saindo...");
	}
}

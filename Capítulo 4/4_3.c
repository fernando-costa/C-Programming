// Programa para inverter um número de três dígitos fornecido pelo usuário
// sem utilizar aritimática.

#include <stdio.h>

int main(void)
{
	int d1, d2, d3;

	printf("Digite um número de três dígitos: ");
	scanf("%1d%1d%1d", &d1, &d2, &d3);

	printf("O número reverso é: %d%d%d\n", d3, d2, d1);

	return 0;
}

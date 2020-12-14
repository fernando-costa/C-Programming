// Programa para inverter um número de três dígitos fornecido pelo usuário.

#include <stdio.h>

int main(void)
{
	int num, d1, d2, d3, rev;

	printf("Digite um número de três dígitos: ");
	scanf("%d", &num);

	d1 = (num / 100);
	d2 = ((num % 100) / 10);
	d3 = ((num % 100) % 10);

	rev = (d3 * 100) + (d2 * 10) + d1;

	printf("O número reverso é: %d\n", rev);

	return 0;
} 

// Programa para converter um número para a base octal.

#include <stdio.h>

int main(void)
{
	int num, d1, d2, d3, d4, d5;

	printf("Digite um número entre 0 e 32767: ");
	scanf("%d", &num);

	d5 = (num % 8);
	d4 = ((num / 8) % 8);
	d3 = ((num / 64) % 8);
	d2 = ((num / 512) % 8);
	d1 = ((num / 4096) % 8);

	printf("O número dado em octal é: %d%d%d%d%d\n", d1, d2, d3, d4, d5);

	return 0;
}

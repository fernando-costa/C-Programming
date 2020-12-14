// Programa para inverter um número de dois digitos fornecidos pelo 
// usuário.

#include <stdio.h>

int main(void)
{
	int num, d1, d2, rev;

	printf("Digite um número de dois dígitos: ");
	scanf("%d", &num);

	d1 = (num / 10);
	d2 = (num % 10);
	rev = (d2 * 10) + d1;

	printf("O número reverso é: %d\n", rev);

	return 0;
}

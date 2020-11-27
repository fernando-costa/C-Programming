// Programa para formatar uma data fornecida pelo usuário.

#include <stdio.h>

int main(void)
{
	int m, d, a;

	printf("Entre com uma data (mm/dd/aaaa): ");
	scanf("%2d/%2d/%4d", &m, &d, &a);

	printf("Você entrou com a data %4.4d%.2d%.2d\n", a, m, d);

	return 0;
}

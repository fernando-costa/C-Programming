// Programa para somar frações fornecidas pelo usuário.

#include <stdio.h>

int main(void)
{
	int n1, n2, n_som, d1, d2, d_som;

	printf("Digite as duas frações separadas por um sinal de soma: ");
	scanf("%d/%d+%d/%d", &n1, &d1, &n2, &d2);

	n_som = (n1 * d2) + (n2 * d1);
	d_som = d1 * d2;

	printf("A soma das frações é: %d/%d\n", n_som, d_som);

	return 0;
}

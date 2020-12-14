// Programa para calcular o digito confirmador de um código de barras
// fornecido pelo usuário.

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, s1, s2, sp, dig;

	printf("Digite o número do código de barras: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

	s1 = n1 + n3 + n5 + n7 + n9 + n11;
	s2 = n2 + n4 + n6 + n8 + n10;

	sp = (((3 * s1) + s2) - 1);

	dig = (9 - (sp % 10));

	printf("O dígito do código de barras é: %d\n", dig);

	return 0;
}

// Calcula o valor de um polinomio fixo para um valor fornecido pelo
// usuário.

#include <stdio.h>

int main(void)
{
	float x, pol;

	printf("Entre com o valor de x: ");
	scanf("%f", &x);

	pol = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;

	printf("O valor do polinômio é de %.2f.\n", pol);

	return 0;
}



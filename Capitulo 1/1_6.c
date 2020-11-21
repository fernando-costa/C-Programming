// Calcula o valor do polinômio de acordo com a Regra de Horn

#include <stdio.h>

int main(void)
{
	float x, pol;

	printf("Entre com o valor de x: ");
	scanf("%f", &x);

	pol = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	printf("O valor de polinômio é de: %.2f\n", pol);

	return 0;
}

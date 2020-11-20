// Programa que calcula o valor a ser pago com uma taxa de 5%
// de acordo com um valor fornecido pelo usuário

#include <stdio.h>

int main(void)
{
	float quantidade, taxa;

	printf("Digite a quantidade que você quer calcular: ");
	scanf("%f", &quantidade);

	taxa = quantidade + (quantidade * 0.05f);

	printf("Com a taxa fica: $%.2f\n", taxa);

	return 0;
}

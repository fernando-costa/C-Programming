// Programa para calcular quantas notas de 20, 10, 5 e 1 Real são necessárias
// para pagar uma quantidade fornecida pelo usuário.

#include <stdio.h>

int main(void)
{
	int dinheiro, vinte, dez, cinco, um, temp;

	printf("Digite a quantidade de dinheiro: ");
	scanf("%d", &dinheiro);

	vinte = dinheiro / 20;
	dinheiro = dinheiro - (vinte * 20);
	dez = dinheiro / 10;
	dinheiro = dinheiro - (dez * 10);
	cinco = dinheiro / 5;
	dinheiro = dinheiro - (cinco * 5);
	um = dinheiro;

	printf("Notas de $20: %d\n", vinte);
	printf("Notas de $10: %d\n", dez);
	printf("Notas de $5: %d\n", cinco);
	printf("Notas de $1: %d\n", um);

	return 0;
}

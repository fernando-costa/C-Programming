// Programa para formatar informações de um produto fornecidas pelo
// usuário.

#include <stdio.h>

int main(void)
{
	int num, d, m, a;
	float preco;

	printf("Entre com o número do item: ");
	scanf("%d", &num);

	printf("Entre com o preço da unidade: ");
	scanf("%f", &preco);

	printf("Entre com a data da compra (dd/mm/aaaa) : ");
	scanf("%d/%d/%d", &d, &m, &a);

	printf("Item\tPreço da\tData da\n\tunidade \tcompra\n");
	printf("%-d\t$%6.2f \t%-.2d/%-.2d/%-.2d\n", num, preco, d, m, a);

	return 0;
} 

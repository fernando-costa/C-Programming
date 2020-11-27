// Programa para formatar um código ISBN fornecido pelo usuário.

#include <stdio.h>

int main(void)
{
	int pre, id, code, num, dig;

	printf("Digite o código ISBN: ");
	scanf("%d-%d-%d-%d-%d", &pre, &id, &code, &num, &dig);

	printf("Prefixo GS1: %d\n", pre);
	printf("Identificador de grupo: %d\n", id);
	printf("Código do editor: %d\n", code);
	printf("Número do item: %d\n", num);
	printf("Dígito de checagem: %d\n", dig);

	return 0;
} 

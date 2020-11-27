// Programa que formata um telefone fornecido pelo usuário.

#include <stdio.h>

int main(void)
{
	int pre, prim, sec;

	printf("Digite número de telefone [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &pre, &prim, &sec);

	printf("O número digitado é: %d.%d.%d\n", pre, prim, sec);

	return 0;
}

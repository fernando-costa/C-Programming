// Programa que organiza números de 1 à 16 fornecidos pelo usuário em 
// linhas e colunas e calcula a soma das mesmas.

#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
//	int soma_linha, soma_coluna, soma_diagonal;

	printf("Digite números de 1 à 16 em qualquer ordem:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

	printf("%d %d %d %d\n", a, b, c, d);
	printf("%d %d %d %d\n", e, f, g, h);
	printf("%d %d %d %d\n", i, j, k, l);
	printf("%d %d %d %d\n", m, n, o, p);

	printf("Soma das linhas: %d %d %d %d\n", a + b + c + d, e + f + g + h, i + j + k + l, m + n + o + p);
	printf("Soma das colunas: %d %d %d %d\n", a + e + i + m, b + f + j + n, c + g + k + o, d + h + l + p);
	printf("Soma das diagonais: %d %d\n", a + f + k + p, d + g + j + m);

	return 0;
} 

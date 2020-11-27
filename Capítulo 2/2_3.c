// Programa para calcular o volume de uma esfera
// de acordo com um raio fornecido pelo usuário.

#include <stdio.h>

#define PI 3.141592

int main(void)
{
	float volume, raio;
	printf("Digite o tamanho do raio da esfera (em metros): ");
	scanf("%f", &raio);

	volume = (4.0f / 3.0f) * PI * raio * raio * raio;

	printf("O volume da esfera é de %.2f metros cúbicos.\n", volume);

	return 0;
}

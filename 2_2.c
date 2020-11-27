#include <stdio.h>
#define PI 3.141592

int main(void)
{
	float volume;
	int raio = 10;

	volume = (4.0f / 3.0f) * PI * raio * raio * raio;

	printf("O volume da esfera é de %.2f metros cúbicos.\n", volume);

	return 0;
}

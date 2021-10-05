#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * mmain - Imprime nmumero positivos, zero y negativos
 *
 * Return: siempre retorna 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - (RAND_MAX /2);

	if (n > 0)
	{
		printf(n,"%d es positivo\n");
	}
	else if (n == 0)
	{
		printf(n,"%d Cero o Nuetro\n");
	}
	else
	{
		printf(n,"%d es negativo\n");
	}

	return (0);
}

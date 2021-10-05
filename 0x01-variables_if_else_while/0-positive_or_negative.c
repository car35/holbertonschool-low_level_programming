#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Imprime nmumero positivos, zero y negativos
 *
 * Return: siempre retorna 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d es positivo\n", n);
	}
	else if (n == 0)
	{
		printf("%d es 0, o neutro\n", n);
	}
	else
	{
		printf("%d es negativo\n", n);
	}

	return (0);
}

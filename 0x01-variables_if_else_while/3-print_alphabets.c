#include <stdio.h>

/**
 * main - Imprime el alfabético en minúsculas y mayúsculas.
 *
 * Return: Retor siempre (0)
 */
int main(void)
{
	char Alf

	for (Alf = 'a'; Alf <= 'z'; Alf++)
	{
		putchar(Alf);
	}

	for (Alf = 'A'; Alf <= 'Z'; Alf++)
	{
		putchar(Alf);
	}

	putchar('\n');

	return (0);
}

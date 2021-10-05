#include <stdio.h>

/**
 * main imprime el alfabeto
 *
 * Return:retorna (0)
 */
int main(void)
{
	char Alf;

	for (Alf = 'a'; Alf <= 'z'; Alf++)
		putchar(Alf);

	putchar('\n');
	return (0);
}

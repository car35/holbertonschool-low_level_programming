#include <stdio.h>

/**
 * main - Imprime todos los números de un solo dígito de base 10 a partir de 0,
 *        solo usando putchar y sin variables char.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}

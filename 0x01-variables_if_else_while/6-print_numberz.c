#include <stdio.h>

/**
 * main - Imprime todos los números de un solo dígito de base 10 a partir de 0.
 *
 * Return: Siempre retorna 0.
 */
int main(void)
{
	int base;

	for (base = 0; base < 10; base++)
		putchar((base % 10) + '0');

	putchar('\n');

	return (0);
}

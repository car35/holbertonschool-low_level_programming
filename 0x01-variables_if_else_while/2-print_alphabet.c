#include <stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */

int main(void)
{
	char Alf;

	for (Alf = 'a'; Alf <= 'z'; Alf++)
		putchar(Alf);

	putchar('\n');
	return (0);
}

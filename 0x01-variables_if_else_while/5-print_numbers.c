#include <stdio.h>

/**
  * main - Imprime del 1 al 9 con salto de line
  *
  * Return: siempre retorna (0)
  */
int main(void)
{
	char Nun;

	for (Nun = '0'; Nun <= '9'; Nun++)
	{
		putchar(Nun);
	}

	putchar('\n');

	return (0);
}

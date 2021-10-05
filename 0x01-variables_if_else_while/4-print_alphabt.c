#include <stdio.h>

/**
  * main - Prints some letters of alphabet
  *
  * Return: Always (Success)
  */
int main(void)
{
	char Alf;

	for (Alf = 'a'; Alf <= 'z'; Alf++)
	{
		if (Alf != 'e' && Alf != 'q')
		{
			putchar(Alf);
		}
	}

	putchar('\n');

	return (0);
}

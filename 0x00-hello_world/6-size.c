#include <stdio.h>

/**
  * main - Prints the sizeof many var types
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char carlos;
	int no;
	long int ce;
	long long int go;
	float all;

	printf("Size of a char: %d byte(s)\n", sizeof(carlos));
	printf("Size of an int: %d byte(s)\n", sizeof(no));
	printf("Size of a long int: %d byte(s)\n", sizeof(ce));
	printf("Size of a long long int: %d byte(s)\n", sizeof(go));
	printf("Size of a float: %d byte(s)\n", sizeof(all));
	return (0);
}

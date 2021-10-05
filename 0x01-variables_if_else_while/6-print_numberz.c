/*
 * File: 7-print_tebahpla.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char Alf;

	for (Alf = 'z'; Alf >= 'a'; Alf--)
		putchar(Alf);

	putchar('\n');

	return (0);
}

#include "main.h"
/**
* print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
*/
void print_alphabet_x10(void)
{
int x, filas;
for (filas = 0; filas < 9; filas++)
{
for (x = 97; x <= 122; x++)
{
_putchar (x);
}
_putchar ('\n');
}
}

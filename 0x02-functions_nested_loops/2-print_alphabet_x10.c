#include "main.h"
/**
* void print_alphabet_x10:The funtion print_alphabet_x10 - prints alphabet.
*/
void print_alphabet_x10(void)
{
int x, filas;
for (filas = 0; filas <= 9; filas++)
{
for (x = 97; x < 122; x++)
{
_putchar (x);
}
_putchar ('\n');
}
}

#include "main.h"
/**
*main - print _putchar.
*
*Return: Always 0 (Success).
**/
int main(void)
{
char Tx[11] = "_putchar";
int i = 0;
for (i = 0; i <= 11; i++)
{
_putchar (Tx[i]);
_putchar('\n');
_putchar('\n');
}
return (0);
}

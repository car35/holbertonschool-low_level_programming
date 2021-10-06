#include "main.h"
/**
*main - print _putchar.
*
*Return: Always 0 (Success).
**/
int main(void)
{
char Tx[9] = "_putchar\n";
int i = 0;
for (i = 0; i <= 9; i++)
{
_putchar (Tx[i]);
}
return (0);
}

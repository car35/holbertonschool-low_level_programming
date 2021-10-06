#include "main.h"
/**
*main - print _putchar.
*
*Return: Always 0 (Success).
**/
int main(void)
{
char Tx[] = "_putchar";
int i = 0;
for (i = 0; i <= 8; i++)
{
_putchar (Tx[i]);
}
_putchar ("\n");
return (0);
}

#include <stdio.h>
/**
 * main - main function logra  mostar el alfabeto alreves de (z) a (a)
 * Return:siemore retorna (0).
 **/
int main(void)
{
char Alf;
Alf = 'z';

while (Alf >= 'a')
{
putchar(Alf);
Alf--;
}
putchar('\n');
return (0);
}

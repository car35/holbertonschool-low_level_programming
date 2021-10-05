#include <stdio.h>
/**
 * main - main function manages to display the alphabet backwards from (z) to (a)
 * Return:always(0).
 **/
int main(void)
{
char Alf;
  
Alf = 'z';
  
while (Alf >= 'a')
{
  
putchar (Alf);
  
Alf --;
  
}
putchar('\n');
return (0);
}

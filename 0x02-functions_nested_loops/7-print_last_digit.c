#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number
* @n: number's last digit result
* Return: value of the last digit
*/
int print_last_digit(int n)
{
int last;
if (n >= 10)
{
last = n % 10;
}
return (last);
}

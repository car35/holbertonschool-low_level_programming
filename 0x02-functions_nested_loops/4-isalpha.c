#include "main.h"
/**
*_isalpha - a function that checks for alphabetic character
*
* @x: single letter input
*
* Return: 1 if c is a letter (lower or uppercase), 0 otherwise
*/
int _isalpha(int x)
{
if (((x >= 97) && (x <= 122)) || ((x >= 65) && (x <= 90)))
{
return (1);
}
else
{
return (0);
}
}

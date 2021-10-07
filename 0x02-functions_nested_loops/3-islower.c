#include "main.h"

/**
*_islower - define is a character is lower case or not.
*
*@x: single letter input
*
* Return: - 1 if lowercase 0 if not.
*/
int _islower(int x)
{
if (x >= 97 && x <= 122)
{
return (1);
}
else
{
return (0);
}
}

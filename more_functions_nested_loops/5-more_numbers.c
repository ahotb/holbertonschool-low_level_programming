#include "main.h"

/**
* more_numbers- checks for uppercase character
*
*
* Return: 1 if c is uppercase, 0 otherwise
*/
void more_numbers(void)
{
char x;
int y;
for (x = '0'; x <= '9'; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 9)
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}

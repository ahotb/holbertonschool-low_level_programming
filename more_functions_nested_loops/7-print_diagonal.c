#include "main.h"

/**
* print_line- checks for uppercase character
*
* @n: oen back
* Return: 1 if c is uppercase, 0 otherwise
*/
void print_diagonal(int n)
{
int x, y;
if (n > 0)
{
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

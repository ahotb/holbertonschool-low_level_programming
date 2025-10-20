#include "main.h"

/**
* print_line- checks for uppercase character
*
*
* Return: 1 if c is uppercase, 0 otherwise
*/
void print_line(int n)
{
int x;

if (n > 0)
{
for (x = 0; x < n; x++)
{
_putchar('_');
}
}
_putchar('\n');
}

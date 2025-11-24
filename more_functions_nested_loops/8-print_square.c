#include "main.h"

/**
* print_square- checks for uppercase character
*
* @size: oen back
* Return: 1 if c is uppercase, 0 otherwise
*/
void print_square(int size)
{
int col, x;
if (size > 0)
{
for (x = 0; x < size; x++)
{
for (col = 0; col < size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

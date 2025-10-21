#include "main.h"

/**
* print_triangle- checks for uppercase character
*
* @size: oen back
* Return: 1 if c is uppercase, 0 otherwise
*/
void print_triangle(int size)
{
int c, x;
if (size > 0)
{
for (x = 0; x < size; x++)
{
for (c = 0; c < size; c++)
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

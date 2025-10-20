#include "main.h"

/**
* print_square- checks for uppercase character
*
* @n: oen back
* Return: 1 if c is uppercase, 0 otherwise
*/
void print_square(int size)
{
int x;

if (size > 0)
{
for (x = 0; x < size; x++)
{
_putchar('#');
}
}
_putchar('\n');
}

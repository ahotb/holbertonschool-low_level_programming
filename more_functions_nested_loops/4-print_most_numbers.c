#include "main.h"

/**
* print_most_numbers- checks for uppercase character
*
*
* Return: 1 if c is uppercase, 0 otherwise
*/
void print_most_numbers(void)
{
char x;
for (x = '0'; x <= '9'; x++)
{
if (x != '2' && x !='4')
{
_putchar(x);
_putchar('\n');
}
}
}

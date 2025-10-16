#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: Prints multiplication table of 9
 * Return: void
 */
void times_table(void)
{
int i, result;
for (i = 0; i <= 9; i++)
{
result = i * 9;
if (i == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');
if (result < 10)
{
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
}
}
_putchar('\n');
}

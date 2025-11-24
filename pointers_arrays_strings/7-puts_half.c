#include "main.h"
#include <stdio.h>

/**
*  puts_half - one  pointer
* @str: pointer to an int
*
* Return: void
*/
void puts_half(char *str)
{
int i;
int n;
int x;
for (n = 0; str[n] != '\0'; n++)
;
if (n % 2 == 0)
{
x = n / 2;
}
else
{
x = (n + 1) / 2;
}
for (i = x; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

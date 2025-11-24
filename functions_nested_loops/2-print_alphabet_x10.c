#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet in lowercase
*
* Return: void
*/
void print_alphabet_x10(void)
{
int i;
int n;
for (n = 0; n < 10; n++)
{
for (i = 0; i < 26; i++)
_putchar('a' + i);
_putchar('\n');
}
}

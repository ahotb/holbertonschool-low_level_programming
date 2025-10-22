#include "main.h"
#include <stdio.h>

/**
* _puts - one  pointer
* @str: pointer to an int
*
* Return: void
*/
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

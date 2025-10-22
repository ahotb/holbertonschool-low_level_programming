#include "main.h"
#include <stdio.h>

/**
* print_rev - one  pointer
* @s: pointer to an int
*
* Return: void
*/
void print_rev(char *s)
{
int i;
int srt = 0;
while (s[srt] != '\0')
{
srt++;
}
for (i = srt - 1; i >= '\0'; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

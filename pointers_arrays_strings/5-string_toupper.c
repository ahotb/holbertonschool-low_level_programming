#include "main.h"
#include <stdio.h>
/**
 * string_toupper - copies a string
 * @s add the ponters
 *
 *
 * Return: pointer to dest
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - ('a' - 'A');
}
}
return (s);
}

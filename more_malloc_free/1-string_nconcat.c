#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat- prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the address of memory to print
 * @n: the address of memory to print
 *
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, t, cunt1;
char *temp;
if (s2 == NULL)
{
s2 = "";
}
if (s1 == NULL)
{
s1 = "";
}
for (cunt1 = 0; s1[cunt1] != '\0'; cunt1++)
;
temp = malloc(cunt1 + n + 1);
for (t = 0; t < cunt1; t++)
{
temp[t] = s1[t];
}
for (i = 0 ; i < n; i++)
{
temp[t + i] = s2[i];
}
return (temp);
}

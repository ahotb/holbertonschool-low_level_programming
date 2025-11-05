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
int cunt1, cunt2;
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
for (cunt2 = 0; cunt2 < n; cunt2++)
;
temp = malloc(cunt1 + n + 1);
tmep = cunt1[
return (temp);
}

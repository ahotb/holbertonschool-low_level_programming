#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat- prints buffer in hexa
 * @s1: the address of memory to print
 *  @s2: the address of memory to print
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
int i, cu, cu2, t;
char *c;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (cu = 0; s1[cu] != '\0'; cu++)
;
cu += 1;
for (cu2 = 0; s2[cu2] != '\0'; cu2++)
;
cu2 += 1;
c = malloc(sizeof(char) * (cu + cu2 + 1));
if (c == NULL)
{
return (NULL);
}
for (i = 0; i < cu; i++)
{
c[i] = s1[i];
}
for (t = 0; t < cu2; t++)
{
c[i + t] = s2[t];
}
c[i + t] = '\0';
return (c);
}


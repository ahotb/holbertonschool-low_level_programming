#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup- prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{
int i, cu;
char *c;

if (str == NULL)
{
return (NULL);
}
for (cu = 0; str[cu] != '\0'; cu++)
;
cu += 1;

c = malloc(cu *sizeof(char));
if (c == NULL)
{
return (NULL);
}
for (i = 0; i < cu; i++)
{
c[i] = str[i];
}
return (c);
}

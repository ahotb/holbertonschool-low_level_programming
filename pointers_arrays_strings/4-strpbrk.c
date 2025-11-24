#include "main.h"
#include <stdio.h>

/**
* _strpbrk - one  pointer
* @s : pointer to an int
* @accept : pointer to an int
* Return: void
*/
char *_strpbrk(char *s, char *accept)
{
int i, d;
for (i = 0; s[i] != '\0'; i++)
{
for (d = 0; accept[d] != '\0'; d++)
{
if (s[i] == accept[d])
{
return (s + i);
}
}
}
return (NULL);
}


#include "main.h"
#include <stdio.h>

/**
* _strspn - one  pointer
* @s : pointer to an int
* @accept : pointer to an int
* Return: void
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int c;
int i, d;
for (i = 0; s[i] != '\0'; i++)
{
for (d = 0; accept[d] != '\0'; d++)
{
if (s[i] == accept[d])
{
break;
}
}
if (accept[d] == '\0')
{
break;
}
c++;
}
return (c);
}

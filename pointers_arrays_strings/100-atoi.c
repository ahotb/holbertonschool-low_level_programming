#include "main.h"
#include <stdio.h>

/**
* _atoi - one  pointer
* @s: pointer to an int
*
* Return: void
*/
int _atoi(char *s)
{
int i;
int sng = 1;
int r = 0;
for (i = 0; s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9') && s[i] != '+' && s[i] != '-'; i++)
;
for ( ;s[i] == '+' || s[i] == '-'; i++)
{
if (s[i] == '-')
{
sng = sng * - 1;
}
}
for ( ; s[i] >= '0' && s[i] <= '9'; i++)
{
r = r * 10 + (s[i] - '0');
}
return (r * sng);
}


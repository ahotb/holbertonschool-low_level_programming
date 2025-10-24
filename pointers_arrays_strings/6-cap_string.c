#include "main.h"
#include <stdio.h>

/**
* cap_string - one  pointer
* @s: pointer to an int
*
* Return: void
*/
char *cap_string(char *s)
{
int i;
int cp = 1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' ||
s[i] == '}')
{
cp = 1;
}
else if (s[i] >= 'a' && s[i] <= 'z' && cp)
{
s[i] = s[i] - 32;
cp = 0;
}
else
{
cp = 0;
}
}
return (s);
}

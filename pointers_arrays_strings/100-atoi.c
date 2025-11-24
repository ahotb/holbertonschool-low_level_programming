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
int sign = 1;
int result = 0;
int found_digit = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-' && !found_digit)
{
sign *= -1;
}
else if (s[i] == '+' && !found_digit)
{
}
else if (s[i] >= '0' && s[i] <= '9')
{
found_digit = 1;
if (sign == 1)
{
result = result * 10 + (s[i] - '0');
}
else
{
result = result * 10 - (s[i] - '0');
}
}
else if (found_digit)
{
break;
}
}
return (result);
}

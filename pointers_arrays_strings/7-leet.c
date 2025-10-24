#include "main.h"
#include <stdio.h>

/**
* leet - one  pointer
* @s: pointer to an int
*
* Return: void
*/
char *leet(char *s)
{
int i, j;
char lower[] = "aeotl";
char upper[] = "AEOTL";
char nums[] = "43071";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; lower[j] != '\0'; j++)
{
if (s[i] == lower[j] || s[i] == upper[j])
{
s[i] = nums[j];
}
}
}
return (s);
}

#include "main.h"
#include <stdio.h>

/**
* print_rev - one  pointer
* @s: pointer to an int
*
* Return: void
*/
void rev_string(char *s)
{
int i;
int srt = 0;
char temp;
while (s[srt] != '\0')
{
srt++;
}
for (i = 0; i < srt / 2; i++)
{
temp = s[i];
s[i] = s[srt - 1 - i];
s[srt - 1 - i] = temp;
}
}

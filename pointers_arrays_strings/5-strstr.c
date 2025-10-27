#include "main.h"
#include <stdio.h>

/**
* _strstr - one  pointer
* @haystack : pointer to an int
* @needle : pointer to an int
* Return: void
*/
char *_strstr(char *haystack, char *needle)
{
int i, d;
for (i = 0; haystack[i] != '\0'; i++)
{
for (d = 0; needle[d] != '\0'; d++)
{
if (haystack[i + d] != needle[d])
{
break;
}
}
if (needle[d] == '\0')
{
return (haystack + i);
}
}
return (NULL);
}


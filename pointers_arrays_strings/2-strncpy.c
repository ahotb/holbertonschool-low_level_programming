#include "main.h"
#include <stdio.h>

/**
* *_strncpy - one  pointer
* @dest: pointer to an int
* @src : pointer to an int
* @n: int
* Return: void
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] =Ù'\0';
}
return (dest);
}

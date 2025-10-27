#include "main.h"
#include <stdio.h>

/**
* __memcpy - one  pointer
* @dest : pointer to an int
* @src : pointer to an int
* @n : pointer to an int
* Return: void
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

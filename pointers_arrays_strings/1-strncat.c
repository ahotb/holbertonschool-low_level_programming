#include "main.h"
#include <stdio.h>

/**
* *_strncat - one  pointer
* @dest: pointer to an int
* @src : pointer to an int
* @n: int
* Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
int m;
int i;
for (m = 0; dest[m] != '\0'; m++)
;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[m + i] = src[i];
}
return (dest);
}

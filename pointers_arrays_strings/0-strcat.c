#include "main.h"
#include <stdio.h>

/**
* *_strcat - one  pointer
* @dest: pointer to an int
* @src : pointer to an int
* Return: void
*/
char *_strcat(char *dest, char *src)
{
int m;
int i;
for (m = 0; dest[m] != '\0'; m++)
;
for (i = 0; src[i] != '\0'; i++)
{
dest[m] = src[i];
m++;
}
return (dest);
}

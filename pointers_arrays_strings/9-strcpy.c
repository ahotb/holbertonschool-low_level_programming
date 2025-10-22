#include "main.h"
#include <stdio.h>

/**
* *_strcpy - one  pointer
* @*dest: pointer to a char
* @*src: pointer to a char
* Return: void
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}

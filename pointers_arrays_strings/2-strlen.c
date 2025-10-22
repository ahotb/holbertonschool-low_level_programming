#include "main.h"
#include <stdio.h>

/**
* _strlen - one  pointer
* @s: pointer to an int
*
* Return: void
*/
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++);

return (i);
}

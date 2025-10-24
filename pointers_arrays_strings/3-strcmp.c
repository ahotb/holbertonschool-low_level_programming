#include "main.h"
#include <stdio.h>
/**
 * _strcmp - copies a string
 * @s1: destination buffer
 * @s2: source string
 *
 * Return: pointer to dest
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}

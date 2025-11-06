#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * calloc- prints buffer in hexa
 * @nmemb,: the address of memory to print
 * @size: the address of memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, total;
void *temp;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
total = nmemb * size;
temp = malloc(total);
if (temp == NULL)
{
return (NULL);
}
memset(temp, 0, total);
}
return (temp);
}

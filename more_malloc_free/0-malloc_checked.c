#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked(- prints buffer in hexa
 * @b: the address of memory to print
 *
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
void *i;
i = malloc(b);
if (i == NULL)
{
exit(98);
}
return (i);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range- prints buffer in hexa
 * @min: the address of memory to print
 * @max: the address of memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
unsigned int array;
int y = 0;
int *temp;
if (min > max)
{
return (NULL);
}
array = max - min + 1;
temp = malloc(array *sizeof(int));
if (temp == NULL)
{
return (NULL);
}

while (min < max + 1)
{
temp[y] = min;
y++;
min++;
}
return (temp);
}

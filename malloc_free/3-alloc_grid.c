#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid- prints buffer in hexa
 * @width: the address of memory to print
 * @height: the address of memory to print
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
int n, i, j, t;
int **temp;
if (width <= 0 || height <= 0)
{
return (NULL);
}
temp = malloc(height * sizeof(int *));
if (temp == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
temp[i] = malloc(width * sizeof(int));
if (temp[i] == NULL)
{
for (j = 0; j < i; j++)
free(temp[j]);
free(temp);
return (NULL);
}
}
for (t = 0; t < height; t++)
{
for (n = 0; n < width; n++)
{
temp[t][n] = (0);
}
}
return (temp);
}

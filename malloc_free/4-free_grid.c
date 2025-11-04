#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid- prints buffer in hexa
 * @grid: the address of memory to print
 * @height: the address of memory to print
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
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

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
int cu1, cu2, i, t, tnp;
if (width == NULL) || height == NULL))
{
return (NULL);
}
for (cu1 = 0; width[cu1] != '\0'; cu1++)
;
for (cu2 = 0; height[cu2] != '\0'; cu2++)
;
tnp = malloc(sizeof(int) * (cu1 + cu2 + 1));
if (width == NULL) || height == NULL))
{
return (NULL);
}
for (i = 0; i < width[cu1]; i++)
{
tnp[i] = width[cu1];
}
for (t = 0; t < height[cu2]; t++)
{
tnp[i + t] = height[cu2];
}
return (tnp[i + t]);
}

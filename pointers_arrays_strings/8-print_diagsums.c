#include "main.h"
#include <stdio.h>

/**
* print_diagsums - one  pointer
* @a : pointer to an int
* @size :pointer to an int
* Return: void
*/
void print_diagsums(int *a, int size)
{
int i;
int su1 = 0, su2 = 0;
for (i = 0; i < size; i++)
{
su1 += a[i * size + i];
su2 += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n" , su1, su2);
}

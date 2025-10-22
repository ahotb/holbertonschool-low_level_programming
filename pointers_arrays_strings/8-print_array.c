#include "main.h"
#include <stdio.h>

/**
* print_array - one  pointer
* @a: pointer to an int
* @n: pointer to an int
* Return: void
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i > 0)
{
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}

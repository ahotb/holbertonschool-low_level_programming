#include "main.h"
#include <stdio.h>
/**
 * reverse_array - copies a string
 * @a: destination buffer
 * @n: source string
 *
 * Return: pointer to dest
 */
void reverse_array(int *a, int n)
{
int i = 0;
int e = n - 1;
int tmp;
while (i < e)
{
tmp = a[i];
a[i] = a[e];
a[e] = tmp;
i++;
n--;
}
}

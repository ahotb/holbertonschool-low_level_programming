#include <unistd.h>
#include "function_pointers.h"

/**
* int_index - check the code
* @array : check the code
* @size : check the code
* @cmp : check the code
*
*
* Return: Always 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i, r;
if (array == NULL || cmp == NULL)
return (-1);
if (size <=  0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
r = cmp(array[i]);
if (r != 0)
{
return (i);
}
}
return (-1);
}

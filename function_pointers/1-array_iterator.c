#include <unistd.h>
#include "function_pointers.h"

/**
* array_iterator - check the code
* @array: check the code
* @size: check the code
*
*
*
* Return: Always 0.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)

action(array[i]);
}

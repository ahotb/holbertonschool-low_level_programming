#include "main.h"

/**
* swap_int - one  pointer
* @a: pointer to an int
* @b :pointer to an int
* Return: void
*/
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}

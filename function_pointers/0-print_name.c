#include <unistd.h>
#include "function_pointers.h"

/**
* print_name - check the code
* @name: check the code
* @f: check the code
*
*
*
* Return: Always 0.
*/

void print_name(char *name, void (*f)(char *))
{
f(name);

}

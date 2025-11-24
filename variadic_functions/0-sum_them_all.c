#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code
 * @n : const.
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ba;
unsigned int i;
int s = 0;
if (n == 0)
{
return (0);
}
va_start(ba, n);
for (i = 0; i < n; i++)
{
s += va_arg(ba, int);
}
va_end(ba);
return (s);
}

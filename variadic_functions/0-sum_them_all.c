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
int s;
s = 0;
unsigned int i;
va_list ba;
va_start(ba, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
s += va_arg(ba, int);
}
va_end(ba);
return (s);
}

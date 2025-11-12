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

if (n == 0)
{
return (0);
}

va_list ba;

va_start(ba, n);

int sum = 0;
unsigned int i;
for (i = 0; i < n; i++)
{
sum += va_arg(ba, int);
}
va_end(ba);
return (sum);
}
